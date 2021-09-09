/** \file   ioi-video-output.h
 * \brief   Video output interface for Windows 10 applications
 *
 * \author  Sami Siltaloppi <ssloppi@gmail.com>
 */

/*
 * This file is part of VICE IOI,
 * the Versatile Commodore Emulator
 * with additional I/O Interfaces for external application communication.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#include "types.h"

extern void ioi_video_output_init(void);
extern void ioi_video_output_update(uint8_t *trg, int pitcht);
extern void ioi_video_output_close(void);
