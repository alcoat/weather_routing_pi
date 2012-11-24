#!/bin/bash
#/******************************************************************************
# * $Id: *.sh,v 1.8 2010/06/21 01:54:37 bdbcat Exp $
# *
# * Project:  OpenCPN
# * Purpose:  helper shell script
# * Author:   David Register
# *
# ***************************************************************************
# *   Copyright (C) 2010 by David S. Register   *
# *   bdbcat@yahoo.com   *
# *                                                                         *
# *   This program is free software; you can redistribute it and/or modify  *
# *   it under the terms of the GNU General Public License as published by  *
# *   the Free Software Foundation; either version 3 of the License, or     *
# *   (at your option) any later version.                                   *
# *                                                                         *
# *   This program is distributed in the hope that it will be useful,       *
# *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
# *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
# *   GNU General Public License for more details.                          *
# *                                                                         *
# *   You should have received a copy of the GNU General Public License     *
# *   along with this program; if not, write to the                         *
# *   Free Software Foundation, Inc.,                                       *
# *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
# ***************************************************************************
# */

path=$(dirname $0)

# Require icotool from package icoutils
# Require convert from package ImageMagick
# Require inkscape

for pic in $path/grib.svg $path/grib_pi.svg
do
  echo "converting $pic"
  inkscape --without-gui --export-png=$path/$(basename $pic .svg ).png --export-dpi=72 --export-background-opacity=0 --export-width=32 --export-height=32 $pic >/dev/null
done

$path/../../../src/bitmaps/png2wx.pl -C $path/icons.cpp -H $path/icons.h -M ICONS_H $path/*.png

rm $path/*.png

