#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

#include "dialogcolorpicker.h"
#include "atcdialog.h"
#include "atcsituationaldisplay.h"
#include "atcsettings.h"

#include <QStandardItemModel>
#include <QPalette>

namespace Ui {
class DialogSettings;
}

class DialogSettings : public ATCDialog
{
    Q_OBJECT

public:
    explicit DialogSettings(ATCSituationalDisplay *display, QWidget *parent = 0);
    ~DialogSettings();

signals:
    void signalLoadColors();

private slots:
    ATC_MOUSE_HANDLER

    void on_buttonColorPicker_clicked();

    void slotColorPickerClosed();
    void slotSetColor(QColor color);

private:
    Ui::DialogSettings *uiInner;
    DialogColorPicker *dialogColorPicker = nullptr;
    ATCSituationalDisplay *situationalDisplay = nullptr;    
    QStandardItemModel *settingsModel = nullptr;

    bool flagDialogColorPickerExists = false;

//    void initializeColorBoxes();
    void createSettingsModel();
    QList<QStandardItem *> createSettingsRow(QString text, QColor color);
};

#endif // DIALOGSETTINGS_H