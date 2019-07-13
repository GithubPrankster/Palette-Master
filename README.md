# Palette-Master
A small c++ command line tool for converting images to a palette with indexed dithering.

# Building
*stb_image.h* and *stb_image_write.h* are required. The GCC compiler will likely only need as much as C++11/14(?) but I advise to always have the newest version (supporting experimental c++20 but nothing used by this prg). *OpenMP* can be enabled on the compiler with *-fopenmp* to also accelerate the main conversion loop.

# Usage
*palmaster path/to/palette.pal path/to/image.extension*

Palettes follow a simple numbered format, such as the ones found in *Aseprite*.

![example](https://cdn.discordapp.com/attachments/294228850500435969/599439471934701569/unknown.png "Lots of numbers.")

**The conversion algorithm is based on the [Knoll-Yliluoma method by Bisqwit](https://bisqwit.iki.fi/story/howto/dither/jy/), a popular programming creator. Check his content out.**

# Example of Usage
Here is a photo of one of my characters.

![dom](https://cdn.discordapp.com/attachments/294228850500435969/599441695687573544/dom.png "Say hi to Dom.")

Here is the result from converting to the [*simplejpc-16* palette](https://lospec.com/palette-list/simplejpc-16).

![domConvert](https://cdn.discordapp.com/attachments/294228850500435969/599441705623617546/result.png "Dom plays checkers now.")

Have fun using this tool. If you have any questions or problems, put them on issues. You can also contact me on twitter @StarPrankster. I anwser at the speed of light.
