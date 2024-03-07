zathura - a document viewer
===========================

zathura is a highly customizable and functional document viewer based on the
girara user interface library and several document libraries.

Requirements
------------

The following dependencies are required:

* `gtk3` (>= 3.24)
* `glib` (>= 2.74)
* `girara` (>= 0.4.3)
* `libmagic` from file(1): for mime-type detection
* `json-glib`
* `sqlite3` (>= 3.6.23): sqlite3 database backend

The following dependencies are optional:
* `libsynctex` from TeXLive (>= 1.19): SyncTeX support
* `libseccomp`: sandbox support

For building zathura, the following dependencies are also required:

* `meson` (>= 0.61)
* `gettext`
* `pkgconf`

The following dependencies are optional build-time only dependencies:

* `check` (>= 0.11): for tests
* `librvsg-bin`: PNG icons
* `Sphinx`: manpages and HTML documentation
* `doxygen`: HTML documentation
* `breathe`: for HTML documentation
* `sphinx_rtd_theme`: for HTML documentation

Note that `Sphinx` is needed to build the manpages. If it is not installed, the
man pages won't be built. For building the HTML documentation, `doxygen`,
`breathe` and `sphinx_rtd_theme` are needed in addition to `Sphinx`.

The use of `libseccomp` to create a sandboxed environment is optional and can
be disabled by configure the build system with `-Dseccomp=disabled`. The
sandbox will by default be set to "normal" mode, which should not interfere
with the normal operation of zathura. For strict sandbox mode set `sandbox
strict` in zathurarc. Strict sandbox mode will reduce the available
functionality of zathura and provide a read only document viewer.

Installation
------------

To build and install zathura using meson's ninja backend:

    meson build
    cd build
    ninja
    ninja install

Note that the default backend for meson might vary based on the platform. Please
refer to the meson documentation for platform specific dependencies.

Bugs
----

Please report bugs at http://git.pwmt.org/pwmt/zathura.
