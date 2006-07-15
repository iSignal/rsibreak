/* ============================================================
 * Original copied from showfoto:
 *     Copyright 2005 by Gilles Caulier <caulier.gilles@free.fr>
 *
 * Copyright 2005 by Tom Albers <tomalbers@kde.nl>
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation;
 * either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * ============================================================ */

#ifndef SETUP_H
#define SETUP_H

// KDE includes.

#include <kdialogbase.h>

class SetupPriv;
class SetupGeneral;
class SetupTiming;
class SetupPopup;
class SetupMaximized;

/**
 * @class Setup
 * This class manages the dialog chown in which the user
 * can make all the necessary settings. Each part of the config
 * is located in separate files, See SetupGeneral and SetupTimings
 * for example
 * This file is originally copied from showfoto
 * @author Gilles Caulier <caulier.gilles@free.fr>
 * @author Tom Albers <tomalbers@kde.nl>
 */
class Setup : public KDialogBase
{
    Q_OBJECT

public:

    /**
     * Constructor
     * @param parent Parent Widget
     * @param name Name
     */
    Setup(QWidget* parent=0, const char* name=0);

    /**
     * Destructor
     */
    ~Setup();

private:

    SetupPriv        *d;

private slots:

    void slotOkClicked();
};

#endif  /* SETUP_H  */
