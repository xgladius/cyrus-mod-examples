#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/ParticleEmitter2D.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/WinAnimContainer.h>
#include <Cyrus/Classes/Window.h>

class DoodleDoug : public PropertyClass {
public:
    SharedPointer<Window> GetPlayableForeground() { // Function Generated
        using FunctionPointerType = SharedPointer<Window> (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF2FC30);
        return inner(this);
    }

    void PlayersAct(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF31FA0);
        return inner(this, a0);
    }

    void MobsAct() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32000);
        return inner(this);
    }

    void UpdateScore() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32040);
        return inner(this);
    }

    int GetScore() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF320F0);
        return inner(this);
    }

    int UpdateTime(int a0) { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32220);
        return inner(this, a0);
    }

    void UpdateLives() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32100);
        return inner(this);
    }

    void ManageSpriteStates() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF323C0);
        return inner(this);
    }

    void ManageSurprises() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32570);
        return inner(this);
    }

    void InitBoard(Size<int> a0, Size<int> a1, Size<int> a2, Size<int> a3) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, Size<int> a0, Size<int> a1, Size<int> a2, Size<int> a3);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32DD0);
        return inner(this, a0, a1, a2, a3);
    }

    void AddTileTexture(char a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, char a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF33FE0);
        return inner(this, a0);
    }

    void AddTileColor(char a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, char a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34240);
        return inner(this, a0);
    }

    void Show(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF342B0);
        return inner(this, a0);
    }

    void ShowTunnelMap(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF342D0);
        return inner(this, a0);
    }

    void SetAllCells(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF342F0);
        return inner(this, a0);
    }

    void TunnelRC(int a0, int a1, int a2, int a3, int a4) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0, int a1, int a2, int a3, int a4);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34310);
        return inner(this, a0, a1, a2, a3, a4);
    }

    void ResetPlayers(bool a0, WinAnimContainer a1) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, bool a0, WinAnimContainer a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF2FE80);
        return inner(this, a0, a1);
    }

    bool AddPlayer(Point<int> a0, float a1, WinAnimContainer a2) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, float a1, WinAnimContainer a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF2FC60);
        return inner(this, a0, a1, a2);
    }

    bool AddMob(Point<int> a0, float a1, bool a2, bool a3, int a4) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, float a1, bool a2, bool a3, int a4);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF30130);
        return inner(this, a0, a1, a2, a3, a4);
    }

    bool AddRock(Point<int> a0, std::string a1) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, std::string a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF304C0);
        return inner(this, a0, a1);
    }

    bool AddGem(Point<int> a0, std::string a1, int a2) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, std::string a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF30950);
        return inner(this, a0, a1, a2);
    }

    bool AddBonusGem(Point<int> a0, std::string a1, int a2) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, std::string a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF315C0);
        return inner(this, a0, a1, a2);
    }

    void OutOfTime() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF322F0);
        return inner(this);
    }

    bool AddEmitter(ParticleEmitter2D a0) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, ParticleEmitter2D a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF31900);
        return inner(this, a0);
    }

    void DeleteAllPlayers() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34620);
        return inner(this);
    }

    void DeleteAllMobs() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34660);
        return inner(this);
    }

    void DeleteAllRocks() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34740);
        return inner(this);
    }

    void DeleteAllGems() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34790);
        return inner(this);
    }

    void DeleteAllBombs() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF347F0);
        return inner(this);
    }

    void DeleteAllSurprises() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF34840);
        return inner(this);
    }

    void DeleteAllCaptions() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF348F0);
        return inner(this);
    }

    void DisplayAnnouncement(std::wstring a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, std::wstring a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35030);
        return inner(this, a0, a1);
    }

    void UndisplayAnnouncement() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35090);
        return inner(this);
    }

    int GetGridWidth() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF355F0);
        return inner(this);
    }

    int GetGridHeight() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35600);
        return inner(this);
    }

    int GetNumRows() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35610);
        return inner(this);
    }

    int GetNumCols() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35620);
        return inner(this);
    }

    int GetGameState() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF355E0);
        return inner(this);
    }

    void SetGameState(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF350F0);
        return inner(this, a0);
    }

    void SetPlayerCommand(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF350D0);
        return inner(this, a0);
    }

    void InitPathGraph() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35110);
        return inner(this);
    }

    void AddToScore(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35820);
        return inner(this, a0);
    }

    bool AddSurprise(Point<int> a0, int a1) { // Function Generated
        using FunctionPointerType = bool (*)(DoodleDoug *self, Point<int> a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF30E30);
        return inner(this, a0, a1);
    }

    int AddCaption(std::wstring a0, Point<int> a1, int a2) { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self, std::wstring a0, Point<int> a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF31A30);
        return inner(this, a0, a1, a2);
    }

    void SpritesDance() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35AA0);
        return inner(this);
    }

    void DetachAllSprites() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF33FA0);
        return inner(this);
    }

    int GetNumBombs() { // Function Generated
        using FunctionPointerType = int (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32210);
        return inner(this);
    }

    void UpdateBombs(int a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF32160);
        return inner(this, a0);
    }

    void DoTimeBonusEffect() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF311E0);
        return inner(this);
    }

    void DoBombBonusEffect() { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF313C0);
        return inner(this);
    }

    void PlayDiggingSoundLoop(bool a0) { // Function Generated
        using FunctionPointerType = void (*)(DoodleDoug *self, bool a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF35C50);
        return inner(this, a0);
    }

};