# AlphaOS
This repo contains AlphaOS, a hand-written operating system in C and Assembly

## Requirements

- [Docker](https://www.docker.com/)
- [Qemu](https://www.qemu.org/)

## Setup

Build an image for our build-environment:
 - `docker build buildenv -t alphaos-buildenv`

## Building

Enter build environment:
 - Linux or MacOS: `docker run --rm -it -v "$PWD":/root/env alphaos-buildenv`
 - Windows (CMD): `docker run --rm -it -v "%cd%":/root/env alphaos-buildenv`
 - Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" alphaos-buildenv`

Building for x86_64:
 - `make build-x86_64`

To leave the build environment, enter `exit`.

## Emulation

You can emulate your operating system using [Qemu](https://www.qemu.org/):

 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
 
 NOTE: When building your operating system, if changes to your code fail to compile, ensure your QEMU emulator has been closed, as this will block writing to `kernel.iso`.

## Cleaning Up

Remove the build-evironment image:
 - `docker rmi alphaos-buildenv -f`