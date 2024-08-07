#pragma once
#include <Cyrus/Shared.h>
#include <Cyrus/Classes/PropertyClass.h>
#include <Cyrus/Classes/Window.h>

class ControlTileMap : public Window {
public:
    int getNBorderSize() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x248);
    }

    void setNBorderSize(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x248) = val;
    }

    Size<int> getTileSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x24C);
    }

    void setTileSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x24C) = val;
    }

    Size<int> getMapSize() { // Property Generated Getter
      return *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x254);
    }

    void setMapSize(Size<int> val) { // Property Generated Setter
      *reinterpret_cast<Size<int>*>(reinterpret_cast<uintptr_t>(this) + 0x254) = val;
    }

    int getNDefaultTile() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x25C);
    }

    void setNDefaultTile(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x25C) = val;
    }

    Vector<SharedPointer<ControlTileMap__Tile>> * getTiles() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<ControlTileMap__Tile>> *>(reinterpret_cast<uintptr_t>(this) + 0x260);
    }

    void setTiles(Vector<SharedPointer<ControlTileMap__Tile>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<ControlTileMap__Tile>> **>(reinterpret_cast<uintptr_t>(this) + 0x260) = val;
    }

    Vector<SharedPointer<ControlTileMap__CellInfo>> * getMap() { // Property Generated Getter
      return reinterpret_cast<Vector<SharedPointer<ControlTileMap__CellInfo>> *>(reinterpret_cast<uintptr_t>(this) + 0x278);
    }

    void setMap(Vector<SharedPointer<ControlTileMap__CellInfo>> * val) { // Property Generated Setter
      *reinterpret_cast<Vector<SharedPointer<ControlTileMap__CellInfo>> **>(reinterpret_cast<uintptr_t>(this) + 0x278) = val;
    }

    int getNCursorOverTile() { // Property Generated Getter
      return *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x298);
    }

    void setNCursorOverTile(int val) { // Property Generated Setter
      *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this) + 0x298) = val;
    }

    void SetAllCells(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BBB50);
        return inner(this, a0);
    }

    void SetCell(int a0, int a1, int a2) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0, int a1, int a2);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFEB0);
        return inner(this, a0, a1, a2);
    }

    void SetCell1D(int a0, int a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFE80);
        return inner(this, a0, a1);
    }

    int TileCount() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFFF0);
        return inner(this);
    }

    int CellCount() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BDD10);
        return inner(this);
    }

    struct ControlTileMap::CellInfo* GetCell(int a0, int a1) { // Function Generated
        using FunctionPointerType = struct ControlTileMap::CellInfo* (*)(ControlTileMap *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE460);
        return inner(this, a0, a1);
    }

    struct ControlTileMap::CellInfo* GetCell1D(int a0) { // Function Generated
        using FunctionPointerType = struct ControlTileMap::CellInfo* (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE340);
        return inner(this, a0);
    }

    struct ControlTileMap::Tile* GetTile(int a0) { // Function Generated
        using FunctionPointerType = struct ControlTileMap::Tile* (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE630);
        return inner(this, a0);
    }

    struct ControlTileMap::Tile* AddTile() { // Function Generated
        using FunctionPointerType = struct ControlTileMap::Tile* (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0xF4D0A0);
        return inner(this);
    }

    void RemoveTile(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFE40);
        return inner(this, a0);
    }

    void SetBorderSize(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFE70);
        return inner(this, a0);
    }

    Size<int> GetTileSize() { // Function Generated
        using FunctionPointerType = Size<int> (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE760);
        return inner(this);
    }

    int GetTileHeight() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE750);
        return inner(this);
    }

    int GetTileWidth() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BE770);
        return inner(this);
    }

    void SetTileSize(Size<int> a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, Size<int> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFFC0);
        return inner(this, a0);
    }

    void SetDefaultTile(int a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, int a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFF10);
        return inner(this, a0);
    }

    void SetMapSize(Size<int> a0) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, Size<int> a0);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BB860);
        return inner(this, a0);
    }

    int MapWidth() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFE30);
        return inner(this);
    }

    int MapHeight() { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BFE20);
        return inner(this);
    }

    void MoveCells(Rect<int> a0, Point<int> a1) { // Function Generated
        using FunctionPointerType = void (*)(ControlTileMap *self, Rect<int> a0, Point<int> a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BB880);
        return inner(this, a0, a1);
    }

    struct ControlTileMap::CellInfo* GetCellFromScreen(int a0, int a1) { // Function Generated
        using FunctionPointerType = struct ControlTileMap::CellInfo* (*)(ControlTileMap *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BBD80);
        return inner(this, a0, a1);
    }

    int GetCellIndexFromScreen(int a0, int a1) { // Function Generated
        using FunctionPointerType = int (*)(ControlTileMap *self, int a0, int a1);
        FunctionPointerType inner = reinterpret_cast<FunctionPointerType>(__SHARED::base + 0x16BBE60);
        return inner(this, a0, a1);
    }

};