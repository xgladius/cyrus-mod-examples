#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Result.h>

class ResultList : public PropertyClass {
public:
    List<SharedPointer<Result>> * getResults() { // Property Generated Getter
      return reinterpret_cast<List<SharedPointer<Result>> *>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setResults(List<SharedPointer<Result>> * val) { // Property Generated Setter
      *reinterpret_cast<List<SharedPointer<Result>> **>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    int GetResultCount() { // Function Generated
        using FunctionPointerType = int (*)(ResultList *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xC41EC0);
        return inner(this);
    }

    Result* GetResult(int a0) { // Function Generated
        using FunctionPointerType = Result* (*)(ResultList *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x136A9D0);
        return inner(this, a0);
    }

};