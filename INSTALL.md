# Install

Contents:

- [Prerequisites](#prerequisites)
- [Build the ROM](#build-the-rom)
    - [Matching the base ROM](#matching-the-base-rom)
    <!-- - [Building with non-matching code](#building-with-non-matching-code) -->
- [[Optional] LSP setup](#lsp-setup)

## Prerequisites

1. Use one of these platforms:
    - Windows (recommended)
    - Linux
2. Install the following:
    - Python 3.11+ and pip
    - GCC 9+
    - Ninja
3. Install the Python dependencies:
```shell
python -m pip install -r tools/requirements.txt
```
4. Install pre-commit hooks:
```shell
pre-commit install
```
5. Run the Ninja configure script:
```shell
python tools/configure.py
```
By default this will configure for any version that has a baserom in the `extract` folder (see below), to configure for one specific version:
```shell
python tools/configure.py [--version | -v] <eur|jp>
```
6. Put one or more base ROMs in the [`/extract/`](/extract/README.md) directory of this repository.

Now you can run `ninja` to build a ROM for the chosen version.

> [!NOTE]
> For Linux users: Wibo is used by default. If you want to use Wine instead, run `configure.py` with `-w <path/to/wine>`.

## Build the ROM

### Matching the base ROM

**This is optional!** You only need to follow these steps if you want a matching ROM.

First, [extract the ARM7 BIOS from your DS device](https://wiki.ds-homebrew.com/ds-index/ds-bios-firmware-dump). Put the
ARM7 BIOS in the root directory of this repository, and verify that your dumped BIOS matches one of the following:

| File name       | SHA1                                       |
| --------------- | ------------------------------------------ |
| `arm7_bios.bin` | `6ee830c7f552c5bf194c20a2c13d5bb44bdb5c03` |
| `arm7_bios.bin` | `24f67bdea115a2c847c8813a262502ee1607b7df` |

## LSP setup

**This is likely not necessary.** Most C++ editors usually have their one LSP (Language Server Protocol, a tool for code completion and more) configuration that should recognize the project structure and work out of the box. This section is about how to setup your LSP yourself **if the need be**.

The repository contains a [`CMakeLists.txt`](CMakeLists.txt) that allows generating a compilation database. For now, the `CMakeLists.txt` can only be used to generate `compile_commands.json` and similar files, not compiling the project.  
To generate the compilation database, run `cmake -S . -G "Unix Makefiles" -B cmake` from the root directory of the project. This will create a `cmake/` directory that contains the `compile_commands.json`.  
Once the file is generated, you can dynamically link it to the root directory and let your LSP detect it (make sure not to `git add` it though), or edit your `.clangd` as follows for it to recognize the compilation database:
```clangd
CompileFlags:
    CompilationDatabase: "cmake"
```
This setup is adapted from a [tutorial by Strus](https://gist.github.com/Strus/042a92a00070a943053006bf46912ae9), refer to his post for further details.
