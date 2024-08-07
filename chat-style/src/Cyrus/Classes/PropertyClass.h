#pragma once
#include <Cyrus/shared.h>
#include <cstdint>

/**
 * @class SharedObjectDeleter
 * @brief Manages shared and weak references to an object and provides deletion
 * management.
 *
 * @tparam T The type of the object being managed.
 */
template <class T> class SharedObjectDeleter {
private:
  int sharedRefCount; // 0x8
  int weakRefCount;   // 0x0C
  T *object;          // 0x10
  size_t typeID;      // 0x18

  /**
   * @brief Constructs a new SharedObjectDeleter<T>, and immediately frees
   *        SharedObjectDeleter<T> if free is set.
   *
   * @param free If set to true, the object will be freed immediately.
   * @return Pointer to the constructed SharedObjectDeleter<T>.
   */
  virtual SharedObjectDeleter<T *> ctor(bool free);

  /**
   * @brief Deletes the object of type T, only if deletion bit is set, else
   * throws error.
   */
  virtual void performDelete();

  /**
   * @brief Destructs SharedObjectDeleter<T> by passing `true` to `ctor`,
   * returns value of `ctor` call.
   *
   * @return Pointer to the destructed SharedObjectDeleter<T>.
   */
  virtual SharedObjectDeleter<T *> dtor();

public:
  /**
   * @brief Compares the typeID of `other` to the compile-time type ID of
   * `this`.
   *
   * @param other Pointer to another object to compare.
   * @return The typeID if the types are the same, 0 otherwise.
   */
  virtual size_t isSame(void *other) = 0;

  /**
   * @brief Gets the shared reference count.
   *
   * @return The number of shared references.
   */
  int getSharedRefCount() { return sharedRefCount; }

  /**
   * @brief Gets the weak reference count.
   *
   * @return The number of weak references.
   */
  int getWeakRefCount() { return weakRefCount; }

  /**
   * @brief Gets the managed object.
   *
   * @return Pointer to the managed object.
   */
  T *getObject() { return object; }

  /**
   * @brief Gets the type identifier of the managed object.
   *
   * @return The type identifier.
   */
  size_t getTypeID() { return typeID; }
};

/**
 * @class PropertyClass
 * @brief Base class for all property classes, providing reflection and
 * serialization functionality.
 */
class PropertyClass {
private:
  PropertyClass *self;                                 // 0x0008
  SharedObjectDeleter<PropertyClass *> *sharedDeleter; // 0x0010
  char pad_0010[16];                                   // 0x0018
  float N00000402;                                     // 0x0028
  float N00000E5C;                                     // 0x002C
  char pad_0030[24];                                   // 0x0030

  /**
   * @brief Initializes the derived class and adds it to the global
   * ClassReflection system.
   */
  virtual void initialize() = 0;

  /**
   * @brief Destructs the derived class, destructing `this` if `freeThis` is
   * true.
   *
   * @param freeThis If true, `this` will be destructed.
   * @return Pointer to the result of the destruction process.
   */
  virtual void *destructor(bool freeThis) = 0;

public:
  /**
   * @brief Gets the class name of the derived class in the format `class T[*]`.
   *
   * @return Pointer to the class name string.
   */
  virtual char *getClassName() = 0;

  /**
   * @brief Constructs and caches the `PropertyList` for the derived class,
   * adding all reflected members and member functions.
   *
   * @return Pointer to the `PropertyList`.
   */
  virtual void *getPropertyList() = 0;

  /**
   * @brief Copies the property class data.
   *
   * @param a1 Parameter for copy operation.
   * @return True if the copy operation is successful, false otherwise.
   */
  virtual bool copy(uint32_t a1) = 0;

  /**
   * @brief Serializes the derived class's PropertyList as XML.
   *
   * @param a2 Pointer to the XML data.
   * @param a3 Additional parameter for serialization.
   * @return Pointer to the serialized data.
   */
  virtual void *serialize(void *a2, uint32_t a3) = 0;

  /**
   * @brief Called when the PropertyClass is created.
   *
   * @return True if the creation is successful, false otherwise.
   */
  virtual bool onCreated() = 0;

  /**
   * @brief Casts `this` to a pointer of type T.
   *
   * @tparam T The type to cast to.
   * @return Pointer to `this` cast to type T.
   */
  template <typename T> CYRUS T *as() { return static_cast<T *>(this); }

private:
  virtual void unknown_override() = 0;
  virtual void unknown_override1() = 0; ///< Called by PropertyClass::Serialize
  virtual void unknown_override2() = 0;

public:
  /**
   * @brief Called when the PropertyClass is loaded, i.e., `initialize` is
   * called and `onCreated` has finished.
   */
  virtual void onPostLoad() = 0;

  virtual void onFinalizeLoad() = 0;

public:
  /**
   * @brief Determines if the PropertyClass should not be serialized.
   *
   * @return True if the PropertyClass should not be serialized, false
   * otherwise.
   */
  virtual bool shouldNotSerialize() = 0;

private:
  virtual bool noClue(void *a2, uint32_t a3) = 0;
};
STATIC_ASSERT(sizeof(PropertyClass) == 0x48,
              "PropertyClass size is not correct");
