# ![](lasem.svg)

### What is Lasem ?

Lasem is a C/Gobject based SVG/Mathml renderer. It uses cairo and pango as it's
rendering abstraction layer, and then support numerous output formats: xlib,
PNG, SVG, PDF, PS, EPS...

The API tries to follow the SVG and MathML DOM.

It currently includes two simple applications:

lasem-render, which takes a filename as argument and generates either a SVG, a
PDF or a PS file, depending on the output file extension. There's a debug mode
option (-d) that displays the bounding boxes of elements as blue rectangles, the
logical extents of text as red boxes and the ink extents of text as green boxes.
It accepts either MathML, Latex maths and SVG input. For the latex input,
lasemrender uses the embedded itex2mml library for the conversion to MathML.

lsm-test, which, if launched without argument, renders recursively all svg and
mml files in a directory, and generate an html file which displays the browser
rendering, lasem rendering, and if present the reference output. The html
filename is lasemtest.xml. It's main use is the rendering of the sample files in
the samples directory, by invoking "cd test && ./lsm-test data".

### Documentation

The latest documentation is available
[here](https://lasemproject.github.io/lasem).

The Lasem test suite is rendered in a single page
[here](https://lasemproject.github.io/lasem/lasemtest.xml). The first column is
the Lasem rendering, the middle one the reference rendering and the last one the
rendering of your browser.

### Installing Lasem

Lasem uses the meson build system ( http://mesonbuild.com/ ). After you have
downloaded the latest release from
[https://github.com/LasemProject/lasem/releases](https://github.com/LasemProject/lasem/releases),
you can build and install Lasem like [any other meson
project](http://mesonbuild.com/Quick-guide.html#compiling-a-meson-project):

```
meson build
cd build
ninja
ninja install
```

The build can be configured at any time using `meson configure` in the build
directory. `meson configure` invoked without any other argument will show the
configuration options.

On some platforms (like Ubuntu), you may have to configure the dynamic linker
(ld) to let it know where the aravis libraries are installed, and run ldconfig
as root in order to update ld cache.

### Requirements

gobject, glib, gio, gdk-pixbuf, gdk, cairo, pangocairo, libxml, bison, flex

For the runtime, the following ttf fonts should be installed: cmr10, cmmi10,
cmex10 and cmsy10.  They are provided by the lyx-fonts package in fedora, and
the fonts-lyx package in debian/ubuntu.
