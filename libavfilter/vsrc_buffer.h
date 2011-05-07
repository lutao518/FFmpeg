/*
 * Memory buffer source filter
 * Copyright (c) 2008 Vitor Sessak
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVFILTER_VSRC_BUFFER_H
#define AVFILTER_VSRC_BUFFER_H

/**
 * @file
 * memory buffer source API for video
 */

#include "avfilter.h"

int av_vsrc_buffer_add_video_buffer_ref(AVFilterContext *buffer_filter, AVFilterBufferRef *picref);

int av_vsrc_buffer_add_video_buffer_ref2(AVFilterContext *buffer_filter, AVFilterBufferRef *picref,
                                         const char *sws_param);

#endif /* AVFILTER_VSRC_BUFFER_H */
