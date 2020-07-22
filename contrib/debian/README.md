
Debian
====================
This directory contains files used to package C4Td/C4T-qt
for Debian-based Linux systems. If you compile C4Td/C4T-qt yourself, there are some useful files here.

## C4T: URI support ##


C4T-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install C4T-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your C4Tqt binary to `/usr/bin`
and the `../../share/pixmaps/C4T128.png` to `/usr/share/pixmaps`

C4T-qt.protocol (KDE)

