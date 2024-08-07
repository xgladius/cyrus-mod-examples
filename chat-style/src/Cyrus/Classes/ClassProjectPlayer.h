#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>

class ClassProjectPlayer : public PropertyClass {
public:
    gid getPlayerGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48);
    }

    void setPlayerGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x48) = val;
    }

    unsigned short getTotalProgress() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x58);
    }

    void setTotalProgress(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x58) = val;
    }

    unsigned char getTokens() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5A);
    }

    void setTokens(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5A) = val;
    }

    unsigned short getFlags() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x5C);
    }

    void setFlags(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x5C) = val;
    }

    unsigned short getGoalProgress1() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x5E);
    }

    void setGoalProgress1(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x5E) = val;
    }

    unsigned short getGoalProgress2() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x60);
    }

    void setGoalProgress2(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x60) = val;
    }

    unsigned short getGoalProgress3() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x62);
    }

    void setGoalProgress3(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x62) = val;
    }

    unsigned short getGoalProgress4() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x64);
    }

    void setGoalProgress4(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x64) = val;
    }

    unsigned short getGoalProgress5() { // Property Generated Getter
      return *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x66);
    }

    void setGoalProgress5(unsigned short val) { // Property Generated Setter
      *reinterpret_cast<unsigned short*>(reinterpret_cast<uintptr_t>(this) + 0x66) = val;
    }

    unsigned int getPackedName() { // Property Generated Getter
      return *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68);
    }

    void setPackedName(unsigned int val) { // Property Generated Setter
      *reinterpret_cast<unsigned int*>(reinterpret_cast<uintptr_t>(this) + 0x68) = val;
    }

    unsigned char getPurchasedTokens() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5B);
    }

    void setPurchasedTokens(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x5B) = val;
    }

    unsigned char getLevel() { // Property Generated Getter
      return *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x6C);
    }

    void setLevel(unsigned char val) { // Property Generated Setter
      *reinterpret_cast<unsigned char*>(reinterpret_cast<uintptr_t>(this) + 0x6C) = val;
    }

    gid getBuddyListGID() { // Property Generated Getter
      return *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50);
    }

    void setBuddyListGID(gid val) { // Property Generated Setter
      *reinterpret_cast<gid*>(reinterpret_cast<uintptr_t>(this) + 0x50) = val;
    }

    Vector<unsigned char> getExtendedData() { // Property Generated Getter
      return *reinterpret_cast<Vector<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x70);
    }

    void setExtendedData(Vector<unsigned char> val) { // Property Generated Setter
      *reinterpret_cast<Vector<unsigned char>*>(reinterpret_cast<uintptr_t>(this) + 0x70) = val;
    }

    bool getUsesExtraData() { // Property Generated Getter
      return *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88);
    }

    void setUsesExtraData(bool val) { // Property Generated Setter
      *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x88) = val;
    }

};