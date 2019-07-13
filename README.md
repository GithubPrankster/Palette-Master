# Palette-Master
A small c++ command line tool for converting images to a palette with indexed dithering.

# Building
*stb_image.h* and *stb_image_write.h* are required. The GCC compiler will likely only need as much as C++11/14(?) but I advise to always have the newest version (supporting experimental c++20 but nothing used by this prg). *OpenMP* can be enabled on the compiler with *-fopenmp* to also accelerate the main conversion loop.

# Usage
*palmaster path/to/palette.pal path/to/image.extension*

Palettes follow a simple numbered format, such as the ones found in *Aseprite*.

![example](https://cdn.discordapp.com/attachments/294228850500435969/599439471934701569/unknown.png)

**The conversion algorithm is based on the Knoll-Yliluoma method by Bisqwit, a popular programming creator. Check his content out.**
