QT += core gui positioning testlib

CONFIG += c++11

VPATH += ./main \
    ./mock/nav \
    ./suits/flight \
    ./suits/nav \
    ./suits/utils \
    ../custom \
    ../dialog \
    ../display \
    ../flight \
    ../main \
    ../nav \
    ../settings \
    ../ui \
    ../utils

INCLUDEPATH += ./main \
    ./mock/nav \
    ./suits/flight \
    ./suits/nav \
    ./suits/utils \
    ../custom \
    ../dialog \
    ../display \
    ../flight \
    ../main \
    ../nav \
    ../settings \
    ../ui \
    ../utils

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATCConsoleTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

#MAIN PROJECT HEADERS & SOURCES & FORMS GO HERE:

SOURCES += \
    mainwindow.cpp \
    atcdialog.cpp \
    dialogmainmenu.cpp \
    dialogsectorsetup.cpp \
    dialogtextconsole.cpp \
    atclineedit.cpp \
    atcbuttons.cpp \
    atcconsolecommands.cpp \
    atcsituationaldisplay.cpp \
    atcairspacefix.cpp \
    atcairspacesector.cpp \
    atcairspace.cpp \
    atcconst.cpp \
    atcnavfix.cpp \
    atcbeaconvor.cpp \
    atcbeaconndb.cpp \
    atcairport.cpp \
    atcrunway.cpp \
    atcrunwayextendedcentreline.cpp \
    atcabstractbeacon.cpp \
    atcabstractfix.cpp \
    atcabstractprocedure.cpp \
    atcproceduresid.cpp \
    atcprocedurestar.cpp \
    atcabstractproceduresymbol.cpp \
    atcproceduresidsymbol.cpp \
    atcprocedurestarsymbol.cpp \
    atcabstractairway.cpp \
    atcairwaylow.cpp \
    atcairwayhigh.cpp \
    atcabstractsector.cpp \
    atcsectorartcclow.cpp \
    atcsectorartcchigh.cpp \
    atcsectorartcc.cpp \
    dialogsettings.cpp \
    dialogcolorpicker.cpp \
    atcsettings.cpp \
    atcsettingstableview.cpp \
    atccompany.cpp \
    atccompanyfactory.cpp \
    atcaircrafttype.cpp \
    atcaircrafttypefactory.cpp \
    atcpaths.cpp \
    atcroute.cpp \
    atcroutefactory.cpp \
    atcflightplan.cpp \
    atcflightnumberfactory.cpp \
    atcflightplanfactory.cpp \
    atcflight.cpp \
    atcflightfactory.cpp \
    dialogflight.cpp \
    dialogflightcreator.cpp \
    atcmath.cpp \

HEADERS  += \
    mainwindow.h \
    atcdialog.h \
    atcmousehandler.h \
    dialogmainmenu.h \
    dialogsectorsetup.h \
    dialogtextconsole.h \
    atclineedit.h \
    atcbuttons.h \
    atcconsolecommands.h \
    atcsituationaldisplay.h \
    atcflags.h \
    atcairspacefix.h \
    atcairspacesector.h \
    atcairspace.h \
    atcconst.h \
    atcnavfix.h \
    atcbeaconvor.h \
    atcbeaconndb.h \
    atcairport.h \
    atcrunway.h \
    atcrunwayextendedcentreline.h \
    atcabstractbeacon.h \
    atcabstractfix.h \
    atcabstractprocedure.h \
    atcproceduresid.h \
    atcprocedurestar.h \
    atcabstractproceduresymbol.h \
    atcproceduresidsymbol.h \
    atcprocedurestarsymbol.h \
    atcabstractairway.h \
    atcairwaylow.h \
    atcairwayhigh.h \
    atcabstractsector.h \
    atcsectorartcclow.h \
    atcsectorartcchigh.h \
    atcsectorartcc.h \
    dialogsettings.h \
    dialogcolorpicker.h \
    atcsettings.h \
    atcsettingstableview.h \
    atccompany.h \
    atccompanyfactory.h \
    atcaircrafttype.h \
    atcaircrafttypefactory.h \
    atcpaths.h \
    atcroute.h \
    atcroutefactory.h \
    atcflightplan.h \
    atcflightnumberfactory.h \
    atcflightplanfactory.h \
    atcflight.h \
    atcflightfactory.h \
    dialogflight.h \
    dialogflightcreator.h \
    atcmath.h \

FORMS    += mainwindow.ui \
    atcdialog.ui \
    dialogmainmenu.ui \
    dialogsectorsetup.ui \
    dialogtextconsole.ui \
    dialogsettings.ui \
    dialogflight.ui \
    dialogflightcreator.ui

#MOCK SOURCES & HEADERS GO HERE:

SOURCES += mock_atcabstractairway.cpp \
    mock_atcabstractbeacon.cpp \
    mock_atcabstractfix.cpp \
    mock_atcabstractprocedure.cpp \
    mock_atcabstractproceduresymbol.cpp \
    mock_atcabstractsector.cpp

HEADERS += mock_atcabstractairway.h \
    mock_atcabstractbeacon.h \
    mock_atcabstractfix.h \
    mock_atcabstractprocedure.h \
    mock_atcabstractproceduresymbol.h \
    mock_atcabstractsector.h

#TEST SOURCES & HEADERS GO HERE:

SOURCES += main.cpp \
    test_atcabstractairway.cpp \
    test_atcabstractbeacon.cpp \
    test_atcabstractfix.cpp \
    test_atcabstractprocedure.cpp \
    test_atcabstractproceduresymbol.cpp \
    test_atcabstractsector.cpp \
    \
    test_atcairport.cpp \
    test_atcairspace.cpp \
    test_atcairspacefix.cpp \
    test_atcairspacesector.cpp \
    test_atcairwayhigh.cpp \
    test_atcairwaylow.cpp \
    test_atcbeaconndb.cpp \
    test_atcbeaconvor.cpp \
    test_atcnavfix.cpp \
    test_atcproceduresid.cpp \
    test_atcproceduresidsymbol.cpp \
    test_atcprocedurestar.cpp \
    test_atcprocedurestarsymbol.cpp \
    test_atcrunway.cpp \
    test_atcrunwayextendedcentreline.cpp \
    test_atcsectorartcc.cpp \
    test_atcsectorartcchigh.cpp \
    test_atcsectorartcclow.cpp \
    \
    test_atccompany.cpp \
    test_atccompanyfactory.cpp \
    test_atcaircrafttype.cpp \
    test_atcaircrafttypefactory.cpp \
    test_atcroute.cpp \
    test_atcroutefactory.cpp \
    test_atcflightplan.cpp \
    test_atcflightnumberfactory.cpp \
    test_atcflightplanfactory.cpp \
    test_atcflight.cpp \
    test_atcflightfactory.cpp \
    \
    test_atcmath.cpp

HEADERS += \
    test_atcabstractairway.h \
    test_atcabstractbeacon.h \
    test_atcabstractfix.h \
    test_atcabstractprocedure.h \
    test_atcabstractproceduresymbol.h \
    test_atcabstractsector.h \
    \
    test_atcairport.h \
    test_atcairspace.h \
    test_atcairspacefix.h \
    test_atcairspacesector.h \
    test_atcairwayhigh.h \
    test_atcairwaylow.h \
    test_atcbeaconndb.h \
    test_atcbeaconvor.h \
    test_atcnavfix.h \
    test_atcproceduresid.h \
    test_atcproceduresidsymbol.h \
    test_atcprocedurestar.h \
    test_atcprocedurestarsymbol.h \
    test_atcrunway.h \
    test_atcrunwayextendedcentreline.h \
    test_atcsectorartcc.h \
    test_atcsectorartcchigh.h \
    test_atcsectorartcclow.h \
    \
    test_atccompany.h \
    test_atccompanyfactory.h \
    test_atcaircrafttype.h \
    test_atcaircrafttypefactory.h \
    test_atcroute.h \
    test_atcroutefactory.h \
    test_atcflightplan.h \
    test_atcflightnumberfactory.h \
    test_atcflightplanfactory.h \
    test_atcflight.h \
    test_atcflightfactory.h \
    \
    test_atcmath.h

DISTFILES += \
    ../resources/acft_cursor.png