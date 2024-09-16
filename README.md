# CRedis Common

Common header files and utilities for the CRedis project.

## Overview

This repository contains shared definitions, constants, and utility functions
used by both the CRedis server and client implementations. It is designed to be
included as a submodule in the main CRedis project.

## Contents

- `include/credis_common.h`: Main header file with shared definitions
- `src/logger.c`: Implementation of the logger function

## Usage

### As a Submodule

To use this repository as a submodule in your main CRedis project:

1. Add the submodule to your project:

   ```bash
   git submodule add https://github.com/yourusername/credis-common.git credis-common
   ```

2. Initialize and update the submodule:

   ```bash
   git submodule init
   git submodule update
   ```

3. Include the header in your C files:

   ```c
   #include "../credis-common/include/credis_common.h"
   ```

4. Update your build system to include the new include path and source file:

   ```makefile
   CFLAGS += -I./credis-common/include
   SOURCES += ./credis-common/src/logger.c
   ```

### Updating

To update the submodule to the latest version:
