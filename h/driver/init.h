// kX Driver
// Copyright (c) Eugene Gavrilov, 2001-2005.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */


#ifndef INIT_H_
#define INIT_H_

int kx_ac97_init(kx_hw *hw);
int kx_ac97_close(kx_hw *hw);
int kx_hal_close(kx_hw *card);
int kx_hal_init(kx_hw *card,int fast=0);
int kx_timer_init(kx_hw *hw);
int kx_timer_close(kx_hw *hw);
int kx_dsp_init(kx_hw *hw);
int kx_dsp_close(kx_hw *hw);
int kx_ecard_init(kx_hw *hw);
int kx_ecard_close(kx_hw *hw);
int kx_mpu_init(kx_hw *hw);
int kx_mpu_close(kx_hw *hw);
int kx_soundfont_init(kx_hw *hw);
int kx_soundfont_close(kx_hw *hw);

dword detect_db(kx_hw *hw);

int kx_bufmgr_init(kx_hw *hw);
int kx_bufmgr_close(kx_hw *hw);

#endif
