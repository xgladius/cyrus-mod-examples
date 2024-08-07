#include "chat_parser.h"
#include <Cyrus/storage.h>
#include <thread>
#include <windows.h>

void mainThread() {
  printf("Hello from chat-style!\n");
  Cyrus::addWindowUpdateCallback([](Window *root) {
    auto *chatLog = root->findDescendant<ControlText>("chatLog");
    if (chatLog) {
      auto stylizer = chat_msg_parser_t(chatLog);
      stylizer.stylize();
    }
  });
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call) {
  switch (ul_reason_for_call) {
  case DLL_PROCESS_ATTACH:
    DisableThreadLibraryCalls(hModule);
    std::thread(mainThread).detach();
    break;
  case DLL_PROCESS_DETACH:
    break;
  case DLL_THREAD_ATTACH:
  case DLL_THREAD_DETACH:
    break;
  }
  return TRUE;
}