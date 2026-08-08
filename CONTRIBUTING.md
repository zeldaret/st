# Contribution guide
- [Project structure](#project-structure)
- [Decompiling](#decompiling)
- [Code style](#code-style)
  - [Naming new things](#naming-new-things)
  - [Creating a class](#creating-a-class)
<!-- - [Creating new `.c`/`.cpp` files](#creating-new-ccpp-files) -->

## Decompiling
[/docs/decompiling.md](/docs/decompiling.md) has most information as to how to approach decompilation and how to get started.

Reading the rest of this file gives information on the structure of the project and coding style, it is highly recommended to read it.

## Project structure
- `build/`: Build output
    - `eur|jp/`: Target version
        - `build/`: Linked ROM objects
        - `delinks/`: Objects delinked from the base ROM
        - `libs|src/`: Built C/C++ code
        - `arm9.o`: Linked ELF object
        - `arm9.o.xMAP`: Map file listing memory addresses for all symbols
- `config/`: [`dsd`](https://github.com/AetiasHax/ds-decomp) configuration files
- `docs/`: Documentation about the game
- `extract/`: Game assets, extracted from your own supplied ROM
    - `eur|jp/`: [`ds-rom`](https://github.com/AetiasHax/ds-rom) extract directories
- `include/`: Include files
- `src/`: Source C/C++ files
- `tools/`: Tools for this project
    - `mwccarm/`: Compiler toolchain
    - `configure.py`: Generates `build.ninja`
    - `m2ctx.py`: Generates context for [decomp.me](https://decomp.me/)
    - `mangle.py`: Shows mangled symbol names in a given C/C++ file
    - `requirements.txt`: Python libraries
    - `setup.py`: Sets up the project
    - `vtable_sym.py`: Renames and relocates vtable symbols
- `*.sha1`: SHA-1 digests of different versions of the game

## Code style
This project has a `.clang-format` file and all C/C++ files in this project should follow it. We recommend using an editor
compatible with `clang-format` to format the code as you save.

As a rule of thumb, try to mimick the style that can be observed in already decompiled files. \
Please write hexadecimal numbers in upper case (`0x9ABCDEF` instead of `0x9abcdef`). Lowercase numbers are used for global names (old functions names like `func_ovxxx_02xxxxxx`, data, etc).
Class members use uppercase numbers too (e.g., `mUnk_0C` for a member placed at position `0xC`).
New function names should follow `PascalCase`, even if they include numbers.

### Naming new things

You may have to create new classes, structs, member attributes or functions, etc. Here is described how to name them according to what they are.

Once you find out what something does, it helps to give it a meaningfull name (eg. `ModelRender` class, `Actor::IsAlive()` function or `Actor.mPrevPos` member attribute).

If you don't know yet what a piece of code does, try to follow this rough format: `{type}_ov{num}_{address}`.  
- `type` is the kind of code you're naming, `UnkStruct` for a struct, `mUnk` for a member attribute, `Unk{D}System{X}` for a class or group of functions. In the last case, `X` would then be an arbitrary, unique identifier. Likely a number that would increase for every new `System` to name. `D` is optional and aimed to give more information about the context in which the system is used (eg. `File` or `Actor`).
- `num` is the id of the overlay the code is part of.
- `address` is the address of the data you're naming. This may not always be applicable, in which case you can ignore it (and remove the trailing `_` of the format given above).

You can also name thing based on where they are used. Say that some class `ActorP` has a member `mUnk_{X}` that needs it class, you can call the class `UnkStruct_ActorP_{X}`. Same goes for functions (but try to rather name things with their vtable address when applicable, so that they are easier to find and merge later on).

### Creating a class
If you are to create a new class, try to follow this structure:
```cpp
class Foo {
public:
    /* 00 */ int mBar;
    /* 04 */

    Foo();

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual ~Foo();
    /* 0C */

    // itcm
    bool func_01fff1e0();

    // overlay 0
    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, u16 param3);

    static UnkStruct_027e0ce0_34 *func_ov000_0205c904();

    // overlay 1
    void func_ov001_020bc5f8();
    void func_ov001_020bc524(bool param1);

    static Foo *Create();
    static void Destroy();

    // overlay 17
    void func_ov017_020bd69c();
};
```

In order, the parts are:
- Member attributes.
- Constructor (ctor).
- Virtual functions (the placement of the destructor (dtor), if there is any, can vary).
- Other methods, grouped by overlay with a comment indicating which one.

Using `private` may sometime be required to enable some inlining, so feel free to when use it you feel like you should.
