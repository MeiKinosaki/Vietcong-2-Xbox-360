# Portability audit — Vietcong 2 Xbox 360

Status: initial checklist; no original engine source has been audited yet.

## Areas to investigate using authorized sources

- CPU and compiler assumptions: x86-specific assembly, SIMD, alignment, endianness.
- Operating system: Win32 APIs, threads, synchronization, filesystem, dynamic loading.
- Graphics: Direct3D version, shader formats, render targets, texture formats, device state.
- Audio: API, streaming, mixing, voice count and memory budget.
- Input: keyboard/mouse assumptions and abstraction for the Xbox 360 controller.
- Data formats: archives, configuration, localization and save data.
- Networking: protocol and platform services, if in scope.
- Build system: compiler flags, third-party dependencies, licensing and reproducibility.

## Required evidence

For every identified dependency, record its source, license, affected files, proposed replacement, test plan, and status. Do not mark an item implemented based only on a plan.

## Current limitations

The repository's host stub is not a replacement for the game engine. Xenon toolchain availability and the feasibility of a native port remain unverified.
