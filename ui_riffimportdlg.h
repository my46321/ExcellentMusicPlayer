/*

    MIDI Virtual Piano Keyboard
    Copyright (C) 2008-2013, Pedro Lopez-Cabanillas

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; If not, see http://www.gnu.org/licenses/
 
*/

/********************************************************************************
** Form generated from reading UI file 'riffimportdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIFFIMPORTDLG_H
#define UI_RIFFIMPORTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RiffImportDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *labelInput;
    QLineEdit *m_input;
    QPushButton *m_inputBtn;
    QLabel *labelName;
    QLabel *m_name;
    QLabel *labelVersion;
    QLabel *m_version;
    QLabel *labelCopyright;
    QLabel *m_copyright;
    QLabel *labelOutput;
    QLineEdit *m_output;
    QPushButton *m_outputBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RiffImportDlg)
    {
        if (RiffImportDlg->objectName().isEmpty())
            RiffImportDlg->setObjectName(QStringLiteral("RiffImportDlg"));
        RiffImportDlg->resize(391, 215);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        RiffImportDlg->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(RiffImportDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(RiffImportDlg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelInput = new QLabel(frame);
        labelInput->setObjectName(QStringLiteral("labelInput"));

        gridLayout->addWidget(labelInput, 0, 0, 1, 1);

        m_input = new QLineEdit(frame);
        m_input->setObjectName(QStringLiteral("m_input"));
        m_input->setEnabled(true);
        m_input->setReadOnly(true);

        gridLayout->addWidget(m_input, 0, 1, 1, 1);

        m_inputBtn = new QPushButton(frame);
        m_inputBtn->setObjectName(QStringLiteral("m_inputBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_inputBtn->sizePolicy().hasHeightForWidth());
        m_inputBtn->setSizePolicy(sizePolicy);
        m_inputBtn->setMaximumSize(QSize(27, 27));

        gridLayout->addWidget(m_inputBtn, 0, 2, 1, 1);

        labelName = new QLabel(frame);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayout->addWidget(labelName, 1, 0, 1, 1);

        m_name = new QLabel(frame);
        m_name->setObjectName(QStringLiteral("m_name"));

        gridLayout->addWidget(m_name, 1, 1, 1, 2);

        labelVersion = new QLabel(frame);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));

        gridLayout->addWidget(labelVersion, 2, 0, 1, 1);

        m_version = new QLabel(frame);
        m_version->setObjectName(QStringLiteral("m_version"));

        gridLayout->addWidget(m_version, 2, 1, 1, 2);

        labelCopyright = new QLabel(frame);
        labelCopyright->setObjectName(QStringLiteral("labelCopyright"));

        gridLayout->addWidget(labelCopyright, 3, 0, 1, 1);

        m_copyright = new QLabel(frame);
        m_copyright->setObjectName(QStringLiteral("m_copyright"));

        gridLayout->addWidget(m_copyright, 3, 1, 1, 2);

        labelOutput = new QLabel(frame);
        labelOutput->setObjectName(QStringLiteral("labelOutput"));

        gridLayout->addWidget(labelOutput, 4, 0, 1, 1);

        m_output = new QLineEdit(frame);
        m_output->setObjectName(QStringLiteral("m_output"));

        gridLayout->addWidget(m_output, 4, 1, 1, 1);

        m_outputBtn = new QPushButton(frame);
        m_outputBtn->setObjectName(QStringLiteral("m_outputBtn"));
        sizePolicy.setHeightForWidth(m_outputBtn->sizePolicy().hasHeightForWidth());
        m_outputBtn->setSizePolicy(sizePolicy);
        m_outputBtn->setMaximumSize(QSize(27, 27));

        gridLayout->addWidget(m_outputBtn, 4, 2, 1, 1);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(RiffImportDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelInput->setBuddy(m_input);
        labelOutput->setBuddy(m_output);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(buttonBox, m_input);
        QWidget::setTabOrder(m_input, m_inputBtn);
        QWidget::setTabOrder(m_inputBtn, m_output);
        QWidget::setTabOrder(m_output, m_outputBtn);

        retranslateUi(RiffImportDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), RiffImportDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RiffImportDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(RiffImportDlg);
    } // setupUi

    void retranslateUi(QDialog *RiffImportDlg)
    {
        RiffImportDlg->setWindowTitle(QApplication::translate("RiffImportDlg", "Import SoundFont instruments", 0));
        labelInput->setText(QApplication::translate("RiffImportDlg", "Input File", 0));
#ifndef QT_NO_WHATSTHIS
        m_input->setWhatsThis(QApplication::translate("RiffImportDlg", "This text box displays the path and name of the selected SoundFont to be  imported", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_inputBtn->setWhatsThis(QApplication::translate("RiffImportDlg", "Press this button to select a SoundFont file to be imported", 0));
#endif // QT_NO_WHATSTHIS
        m_inputBtn->setText(QApplication::translate("RiffImportDlg", "...", 0));
        labelName->setText(QApplication::translate("RiffImportDlg", "Name", 0));
        m_name->setText(QString());
        labelVersion->setText(QApplication::translate("RiffImportDlg", "Version", 0));
        labelCopyright->setText(QApplication::translate("RiffImportDlg", "Copyright", 0));
        labelOutput->setText(QApplication::translate("RiffImportDlg", "Output File", 0));
#ifndef QT_NO_WHATSTHIS
        m_output->setWhatsThis(QApplication::translate("RiffImportDlg", "This text box displays the name of the output file in .INS format that will be created", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        m_outputBtn->setWhatsThis(QApplication::translate("RiffImportDlg", "Press this button to select a path and file name for the output file", 0));
#endif // QT_NO_WHATSTHIS
        m_outputBtn->setText(QApplication::translate("RiffImportDlg", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class RiffImportDlg: public Ui_RiffImportDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIFFIMPORTDLG_H
