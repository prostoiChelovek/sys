#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'open.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN_H
#define OPEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Open
{
public:
    QGridLayout *gridLayout;
    QTabWidget *Tab;
    QToolButton *playButton;
    QSpacerItem *spacerItem;
    QCheckBox *advancedCheckBox;
    QGroupBox *advancedFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cacheLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *cacheSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *advancedLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *slaveLabel;
    QLineEdit *mrlLine;
    QLineEdit *advancedLineInput;
    QLineEdit *slaveText;
    QPushButton *slaveBrowseButton;
    QFrame *line;
    QFrame *line_1;
    QTimeEdit *startTimeTimeEdit;
    QTimeEdit *stopTimeTimeEdit;
    QCheckBox *slaveCheckbox;
    QDialogButtonBox *buttonsBox;

    void setupUi(QWidget *Open)
    {
        if (Open->objectName().isEmpty())
            Open->setObjectName(QString::fromUtf8("Open"));
        Open->setEnabled(true);
        Open->resize(556, 387);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Open->sizePolicy().hasHeightForWidth());
        Open->setSizePolicy(sizePolicy);
        Open->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(Open);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Tab = new QTabWidget(Open);
        Tab->setObjectName(QString::fromUtf8("Tab"));

        gridLayout->addWidget(Tab, 0, 0, 1, 3);

        playButton = new QToolButton(Open);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy1);
        playButton->setMinimumSize(QSize(70, 0));
        playButton->setPopupMode(QToolButton::MenuButtonPopup);

        gridLayout->addWidget(playButton, 3, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        advancedCheckBox = new QCheckBox(Open);
        advancedCheckBox->setObjectName(QString::fromUtf8("advancedCheckBox"));

        gridLayout->addWidget(advancedCheckBox, 1, 0, 1, 3);

        advancedFrame = new QGroupBox(Open);
        advancedFrame->setObjectName(QString::fromUtf8("advancedFrame"));
        gridLayout_2 = new QGridLayout(advancedFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cacheLabel = new QLabel(advancedFrame);
        cacheLabel->setObjectName(QString::fromUtf8("cacheLabel"));

        horizontalLayout_2->addWidget(cacheLabel);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cacheSpinBox = new QSpinBox(advancedFrame);
        cacheSpinBox->setObjectName(QString::fromUtf8("cacheSpinBox"));
        cacheSpinBox->setAlignment(Qt::AlignRight);
        cacheSpinBox->setMaximum(65535);
        cacheSpinBox->setSingleStep(100);

        horizontalLayout_2->addWidget(cacheSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        advancedLabel = new QLabel(advancedFrame);
        advancedLabel->setObjectName(QString::fromUtf8("advancedLabel"));

        gridLayout_2->addWidget(advancedLabel, 7, 0, 1, 1);

        label_3 = new QLabel(advancedFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        label_4 = new QLabel(advancedFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        label = new QLabel(advancedFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 8, 0, 1, 1);

        slaveLabel = new QLabel(advancedFrame);
        slaveLabel->setObjectName(QString::fromUtf8("slaveLabel"));

        gridLayout_2->addWidget(slaveLabel, 5, 0, 1, 1);

        mrlLine = new QLineEdit(advancedFrame);
        mrlLine->setObjectName(QString::fromUtf8("mrlLine"));
        mrlLine->setReadOnly(true);

        gridLayout_2->addWidget(mrlLine, 7, 1, 1, 5);

        advancedLineInput = new QLineEdit(advancedFrame);
        advancedLineInput->setObjectName(QString::fromUtf8("advancedLineInput"));

        gridLayout_2->addWidget(advancedLineInput, 8, 1, 1, 5);

        slaveText = new QLineEdit(advancedFrame);
        slaveText->setObjectName(QString::fromUtf8("slaveText"));

        gridLayout_2->addWidget(slaveText, 5, 1, 1, 4);

        slaveBrowseButton = new QPushButton(advancedFrame);
        slaveBrowseButton->setObjectName(QString::fromUtf8("slaveBrowseButton"));

        gridLayout_2->addWidget(slaveBrowseButton, 5, 5, 1, 1);

        line = new QFrame(advancedFrame);
        line->setObjectName(QString::fromUtf8("line"));

        gridLayout_2->addWidget(line, 6, 1, 1, 5);

        line_1 = new QFrame(advancedFrame);
        line_1->setObjectName(QString::fromUtf8("line_1"));

        gridLayout_2->addWidget(line_1, 3, 1, 1, 5);

        startTimeTimeEdit = new QTimeEdit(advancedFrame);
        startTimeTimeEdit->setObjectName(QString::fromUtf8("startTimeTimeEdit"));
        startTimeTimeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        startTimeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        startTimeTimeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(startTimeTimeEdit, 0, 4, 1, 2);

        stopTimeTimeEdit = new QTimeEdit(advancedFrame);
        stopTimeTimeEdit->setObjectName(QString::fromUtf8("stopTimeTimeEdit"));
        stopTimeTimeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stopTimeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        stopTimeTimeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(stopTimeTimeEdit, 1, 4, 1, 2);

        slaveCheckbox = new QCheckBox(advancedFrame);
        slaveCheckbox->setObjectName(QString::fromUtf8("slaveCheckbox"));

        gridLayout_2->addWidget(slaveCheckbox, 4, 0, 1, 6);


        gridLayout->addWidget(advancedFrame, 2, 0, 1, 3);

        buttonsBox = new QDialogButtonBox(Open);
        buttonsBox->setObjectName(QString::fromUtf8("buttonsBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonsBox->sizePolicy().hasHeightForWidth());
        buttonsBox->setSizePolicy(sizePolicy2);
        buttonsBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(buttonsBox, 3, 2, 1, 1);

#if QT_CONFIG(shortcut)
        cacheLabel->setBuddy(cacheSpinBox);
        advancedLabel->setBuddy(mrlLine);
        label_3->setBuddy(startTimeTimeEdit);
        label_4->setBuddy(stopTimeTimeEdit);
        label->setBuddy(advancedLineInput);
        slaveLabel->setBuddy(slaveText);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(Tab, advancedCheckBox);
        QWidget::setTabOrder(advancedCheckBox, cacheSpinBox);
        QWidget::setTabOrder(cacheSpinBox, startTimeTimeEdit);
        QWidget::setTabOrder(startTimeTimeEdit, stopTimeTimeEdit);
        QWidget::setTabOrder(stopTimeTimeEdit, slaveCheckbox);
        QWidget::setTabOrder(slaveCheckbox, slaveText);
        QWidget::setTabOrder(slaveText, slaveBrowseButton);
        QWidget::setTabOrder(slaveBrowseButton, mrlLine);
        QWidget::setTabOrder(mrlLine, advancedLineInput);
        QWidget::setTabOrder(advancedLineInput, playButton);
        QWidget::setTabOrder(playButton, buttonsBox);

        retranslateUi(Open);
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveLabel, SLOT(setVisible(bool)));
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveText, SLOT(setVisible(bool)));
        QObject::connect(slaveCheckbox, SIGNAL(clicked(bool)), slaveBrowseButton, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Open);
    } // setupUi

    void retranslateUi(QWidget *Open)
    {
        Open->setWindowTitle(Q_("Dialog", nullptr));
        playButton->setText(Q_("Play", nullptr));
#if QT_CONFIG(tooltip)
        advancedCheckBox->setToolTip(Q_("Show extended options", nullptr));
#endif // QT_CONFIG(tooltip)
        advancedCheckBox->setText(Q_("Show &more options", nullptr));
        cacheLabel->setText(Q_("Caching", nullptr));
#if QT_CONFIG(tooltip)
        cacheSpinBox->setToolTip(Q_("Change the caching for the media", nullptr));
#endif // QT_CONFIG(tooltip)
        cacheSpinBox->setSuffix(Q_(" ms", nullptr));
        advancedLabel->setText(Q_("MRL", nullptr));
        label_3->setText(Q_("Start Time", nullptr));
        label_4->setText(Q_("Stop Time", nullptr));
        label->setText(Q_("Edit Options", nullptr));
        slaveLabel->setText(Q_("Extra media", nullptr));
#if QT_CONFIG(tooltip)
        advancedLineInput->setToolTip(Q_("Complete MRL for VLC internal", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        slaveBrowseButton->setToolTip(Q_("Select the file", nullptr));
#endif // QT_CONFIG(tooltip)
        slaveBrowseButton->setText(Q_("Browse...", nullptr));
#if QT_CONFIG(tooltip)
        startTimeTimeEdit->setToolTip(Q_("Change the start time for the media", nullptr));
#endif // QT_CONFIG(tooltip)
        startTimeTimeEdit->setDisplayFormat(Q_("HH'H':mm'm':ss's'.zzz", nullptr));
#if QT_CONFIG(tooltip)
        stopTimeTimeEdit->setToolTip(Q_("Change the stop time for the media", nullptr));
#endif // QT_CONFIG(tooltip)
        stopTimeTimeEdit->setDisplayFormat(Q_("HH'H':mm'm':ss's'.zzz", nullptr));
        slaveCheckbox->setText(Q_("Play another media synchronously (extra audio file, ...)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Open: public Ui_Open {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN_H
