
Autoconf
========

* `configure.ac` -> `configure` script
* Accept and process build config
* Platform specific tests
    * User-definde
    * Built-in
* Generates files from templates (`.in` files)

Automake
========

* `Makefile.am` => `Makefile`
* Opinionated, convention over configuration
* Many built-in features
* Reduce boilerplate
* Heavily relies on Autoconf

Libtool
=======

* Unified interface for library and shared libraries
* Mostly historic, limited usefulness in Linux

Textbook Workflow
=================

* Private source tree
* `make dist` -> distributed source tarball
* `./configure` -> ready to build
* `make` -> build
* `make install` -> Install software on target system

Quick wins already
==================

* Dependencies
* Build dirs support
* Install with prefix and DESTDIR

