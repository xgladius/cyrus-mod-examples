#include <Cyrus/Classes/Window.h>
#include <Cyrus/shared.h>

namespace Cyrus {
/**
 * @class GlobalPropClassStorage
 * @brief A thread-safe storage class for managing PropertyClass objects.
 *
 * This class provides functionality to find and debug PropertyClass objects in
 * a thread-safe manner. PropertyClass objects are stored when constructed, and
 * removed when destructed. This class ensures that PropertyClass objects in the
 * storage are still valid.
 */
class PropClassStorage {
private:
  std::unordered_set<PropertyClass *>
      classMap;   ///< Set of PropertyClass pointers.
  std::mutex mtx; ///< Mutex for thread safety.

public:
  CYRUS void addPropertyClass(PropertyClass *propClass);

  CYRUS void removePropertyClass(PropertyClass *propClass);

  /**
   * @brief Finds a PropertyClass by its class name.
   *
   * This method is thread-safe.
   *
   * @param className The name of the class to find.
   * @return Pointer to the PropertyClass if found, nullptr otherwise.
   */
  CYRUS PropertyClass *findByClassName(const std::string &className);

  /**
   * @brief Finds all PropertyClass objects with the given class name.
   *
   * This method is thread-safe.
   *
   * @param className The name of the class to find.
   * @return A vector of pointers to the found PropertyClass objects.
   */
  CYRUS std::vector<PropertyClass *>
  findAllByClassName(const std::string &className);

  /**
   * @brief Waits for a PropertyClass with the given class name to be available.
   *
   * This method blocks until the PropertyClass is found or the timeout is
   * reached.
   *
   * @param className The name of the class to wait for.
   * @param timeout The maximum time to wait in milliseconds (default is 5000).
   * @return Pointer to the found PropertyClass if available, nullptr otherwise.
   */
  CYRUS PropertyClass *waitForClass(const std::string &className,
                                    int timeout = 5000);

  /**
   * @brief Writes the details of all PropertyClass objects to a file for
   * debugging.
   *
   * This method is thread-safe.
   *
   * @param filename The name of the file to write to.
   */
  CYRUS void debugWriteToFile(const std::string &filename);

  CYRUS std::unordered_map<std::string, int> getAllClasses();
};

/**
 * @brief An external declaration of the PropClassStorage object.
 *
 * This object provides a thread-safe storage class for managing PropertyClass
 * objects.
 *
 * @see PropClassStorage
 */
extern CYRUS PropClassStorage classes;

/**
 * @def FIND_SINGLE(t)
 * @brief A macro to find a single instance of a PropertyClass.
 *
 * This macro waits 1 second for a PropertyClass object of the specified type to
 * be available and casts it to the required type.
 *
 * @param t The type of the PropertyClass to find.
 *
 * Example usage:
 * @code
 * auto* myClass = FIND_SINGLE(ClientObject);
 * @endcode
 */
#define FIND_SINGLE(t) Cyrus::classes.waitForClass(#t, 1000)->as<t>();

typedef void (*WindowUpdateCallback)(Window *root);
extern CYRUS std::vector<WindowUpdateCallback> windowUpdateCallbacks;

/**
 * @brief Adds a callback for the Window update thread. This callback function
 * garuntees that your Window changes will propagate on the next render cycle.
 * Any changes made to a Window outside of this registration are not garunteed
 * to be propagated.
 * @param callback The callback function.
 */
void addWindowUpdateCallback(WindowUpdateCallback callback);

} // namespace Cyrus
