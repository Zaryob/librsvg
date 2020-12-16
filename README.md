> [!NOTE]
> **9base status: Preserved** · **Lifecycle: archived.**
>
> This repository is retained as historical material and is not actively maintained by 9base.
> The provenance and scope below distinguish local work from inherited projects and dependencies.

# librsvg-c — preserved Debian packaging source

This is historical **C librsvg 2.40.20** source and Debian `librsvg-c` packaging,
not an original 9base SVG implementation. The [upstream README](README) credits
GNOME and explicitly marks the C 2.40.x series deprecated. Project provenance is
[GNOME/librsvg](https://gitlab.gnome.org/GNOME/librsvg), with packaging identified
by [debian/control](debian/control) as
[Debian GNOME's librsvg-c](https://salsa.debian.org/gnome-team/librsvg-c).
[debian/changelog](debian/changelog) records `librsvg-c (2.40.20-4) UNRELEASED`.

The [16 December 2020 local commit](https://github.com/9base/librsvg/commit/456d8e3b13c8de673ae2d94d0fa246d2e68cf00c)
applies an optional-GTK configuration patch in `configure.ac`. Its message
explicitly credits **Ross Burton's 19 November 2013 patch**. Credit 9base's local
patch application, not original design of that upstream/distribution change.
An exact comparison against a full external import baseline was not performed.

The original [README](README), deprecation notice, [AUTHORS](AUTHORS),
[COPYING](COPYING) and [COPYING.LIB](COPYING.LIB) are retained unchanged.
Historical build instructions are preserved without contemporary verification.

## Archival reconstruction note

This explanation was reconstructed on **8 October 2026** from the public
repository tree, metadata and commit history. It is new documentation of
historical material, not evidence that this explanation existed during the
original development period. Original source authorship, technical history
and license files have not been rewritten.

The original [README](README) remains a separate, unchanged file.
