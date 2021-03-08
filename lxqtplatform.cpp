/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXQt - a lightweight, Qt based, desktop toolset
 * https://lxqt.org
 *
 * Copyright: 2021 LXQt team
 * Authors:
 *   P.L. Lucas <selairi@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */


#include "lxqtplatform.h"
using namespace LXQt;

Platform::PlatformType Platform::getPlatform()
{
    const QString platform = QGuiApplication::platformName();

    if(platform == QSL("wayland"))
        return PlatformType::WAYLAND;
    else if(platform == QSL("xcb"))
        return PlatformType::X11;
    else if(platform == QSL("windows"))
        return PlatformType::WINDOWS;
    else if(platform == QSL("qnx"))
        return PlatformType::QNX;
     else if(platform == QSL("openwfd"))
        return PlatformType::OPENWFD;
    else if(platform == QSL("offscreen"))
        return PlatformType::OFFSCREEN;
    else if(platform == QSL("minimalegl"))
        return PlatformType::MINIMALEGL;
    else if(platform == QSL("minimal"))
        return PlatformType::MINIMAL;
    else if(platform == QSL("linuxfb"))
        return PlatformType::LINUXFB;
    else if(platform == QSL("kms"))
        return PlatformType::KMS;
    else if(platform == QSL("ios"))
        return PlatformType::IOS;
    else if(platform == QSL("eglfs"))
        return PlatformType::EGLFS;
    else if(platform == QSL("directfb"))
        return PlatformType::DIRECTFB;
    else if(platform == QSL("cocoa"))
        return PlatformType::COCOA;
    else if(platform == QSL("android"))
        return PlatformType::ANDROID;
     else
        return PlatformType::OTHER;
}
