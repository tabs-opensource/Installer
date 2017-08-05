/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef __I18N_H__
#define __I18N_H__

#include <locale.h>
#include <libintl.h>

#define _(STRING) gettext(STRING)

void init_i18n();

#endif
