#define Q_(a,b) QString::fromUtf8(_(a))
/********************************************************************************
** Form generated from reading UI file 'sprefs_video.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SPREFS_VIDEO_H
#define SPREFS_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SPrefsVideo
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *enableVideo;
    QWidget *videoZone;
    QVBoxLayout *videoZoneLayout;
    QGroupBox *displayBox;
    QGridLayout *gridLayout;
    QLabel *voutLabel;
    QCheckBox *windowDecorations;
    QCheckBox *fullscreen;
    QComboBox *outputModule;
    QComboBox *fullscreenScreenBox;
    QLabel *fullscreenScreenLabel;
    QGroupBox *directXBox;
    QGridLayout *gridLayout_4;
    QCheckBox *hwYUVBox;
    QCheckBox *overlay;
    QGroupBox *kvaBox;
    QGridLayout *gridLayout_3;
    QCheckBox *kvaFixT23;
    QLabel *kvaVideoModeLabel;
    QComboBox *kvaVideoMode;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_1;
    QLabel *deinterLabel;
    QComboBox *deinterlaceBox;
    QLabel *deinterModeLabel;
    QComboBox *deinterlaceModeBox;
    QLineEdit *arLine;
    QLabel *arLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *dirLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *snapshotsDirectory;
    QPushButton *snapshotsDirectoryBrowse;
    QLabel *prefixLabel;
    QLineEdit *snapshotsPrefix;
    QCheckBox *snapshotsSequentialNumbering;
    QLabel *formatLabel;
    QComboBox *snapshotsFormat;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SPrefsVideo)
    {
        if (SPrefsVideo->objectName().isEmpty())
            SPrefsVideo->setObjectName(QString::fromUtf8("SPrefsVideo"));
        SPrefsVideo->resize(682, 679);
        verticalLayout_3 = new QVBoxLayout(SPrefsVideo);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        enableVideo = new QCheckBox(SPrefsVideo);
        enableVideo->setObjectName(QString::fromUtf8("enableVideo"));
        enableVideo->setChecked(true);

        verticalLayout_3->addWidget(enableVideo);

        videoZone = new QWidget(SPrefsVideo);
        videoZone->setObjectName(QString::fromUtf8("videoZone"));
        videoZoneLayout = new QVBoxLayout(videoZone);
        videoZoneLayout->setObjectName(QString::fromUtf8("videoZoneLayout"));
        videoZoneLayout->setContentsMargins(0, 0, 0, 0);
        displayBox = new QGroupBox(videoZone);
        displayBox->setObjectName(QString::fromUtf8("displayBox"));
        gridLayout = new QGridLayout(displayBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        voutLabel = new QLabel(displayBox);
        voutLabel->setObjectName(QString::fromUtf8("voutLabel"));

        gridLayout->addWidget(voutLabel, 3, 0, 1, 1);

        windowDecorations = new QCheckBox(displayBox);
        windowDecorations->setObjectName(QString::fromUtf8("windowDecorations"));

        gridLayout->addWidget(windowDecorations, 2, 0, 1, 1);

        fullscreen = new QCheckBox(displayBox);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        gridLayout->addWidget(fullscreen, 0, 0, 1, 1);

        outputModule = new QComboBox(displayBox);
        outputModule->setObjectName(QString::fromUtf8("outputModule"));
        outputModule->setMaxVisibleItems(15);

        gridLayout->addWidget(outputModule, 3, 1, 1, 1);

        fullscreenScreenBox = new QComboBox(displayBox);
        fullscreenScreenBox->setObjectName(QString::fromUtf8("fullscreenScreenBox"));

        gridLayout->addWidget(fullscreenScreenBox, 4, 1, 1, 1);

        fullscreenScreenLabel = new QLabel(displayBox);
        fullscreenScreenLabel->setObjectName(QString::fromUtf8("fullscreenScreenLabel"));

        gridLayout->addWidget(fullscreenScreenLabel, 4, 0, 1, 1);


        videoZoneLayout->addWidget(displayBox);

        directXBox = new QGroupBox(videoZone);
        directXBox->setObjectName(QString::fromUtf8("directXBox"));
        gridLayout_4 = new QGridLayout(directXBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        hwYUVBox = new QCheckBox(directXBox);
        hwYUVBox->setObjectName(QString::fromUtf8("hwYUVBox"));

        gridLayout_4->addWidget(hwYUVBox, 2, 0, 1, 1);

        overlay = new QCheckBox(directXBox);
        overlay->setObjectName(QString::fromUtf8("overlay"));

        gridLayout_4->addWidget(overlay, 0, 0, 1, 1);


        videoZoneLayout->addWidget(directXBox);

        kvaBox = new QGroupBox(videoZone);
        kvaBox->setObjectName(QString::fromUtf8("kvaBox"));
        gridLayout_3 = new QGridLayout(kvaBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        kvaFixT23 = new QCheckBox(kvaBox);
        kvaFixT23->setObjectName(QString::fromUtf8("kvaFixT23"));

        gridLayout_3->addWidget(kvaFixT23, 0, 0, 1, 1);

        kvaVideoModeLabel = new QLabel(kvaBox);
        kvaVideoModeLabel->setObjectName(QString::fromUtf8("kvaVideoModeLabel"));

        gridLayout_3->addWidget(kvaVideoModeLabel, 1, 0, 1, 1);

        kvaVideoMode = new QComboBox(kvaBox);
        kvaVideoMode->setObjectName(QString::fromUtf8("kvaVideoMode"));

        gridLayout_3->addWidget(kvaVideoMode, 1, 1, 1, 1);


        videoZoneLayout->addWidget(kvaBox);

        groupBox_2 = new QGroupBox(videoZone);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_1 = new QGridLayout(groupBox_2);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        deinterLabel = new QLabel(groupBox_2);
        deinterLabel->setObjectName(QString::fromUtf8("deinterLabel"));

        gridLayout_1->addWidget(deinterLabel, 0, 0, 1, 1);

        deinterlaceBox = new QComboBox(groupBox_2);
        deinterlaceBox->setObjectName(QString::fromUtf8("deinterlaceBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deinterlaceBox->sizePolicy().hasHeightForWidth());
        deinterlaceBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(deinterlaceBox, 0, 1, 1, 1);

        deinterModeLabel = new QLabel(groupBox_2);
        deinterModeLabel->setObjectName(QString::fromUtf8("deinterModeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deinterModeLabel->sizePolicy().hasHeightForWidth());
        deinterModeLabel->setSizePolicy(sizePolicy1);

        gridLayout_1->addWidget(deinterModeLabel, 0, 2, 1, 1);

        deinterlaceModeBox = new QComboBox(groupBox_2);
        deinterlaceModeBox->setObjectName(QString::fromUtf8("deinterlaceModeBox"));
        sizePolicy.setHeightForWidth(deinterlaceModeBox->sizePolicy().hasHeightForWidth());
        deinterlaceModeBox->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(deinterlaceModeBox, 0, 3, 1, 1);

        arLine = new QLineEdit(groupBox_2);
        arLine->setObjectName(QString::fromUtf8("arLine"));

        gridLayout_1->addWidget(arLine, 1, 1, 1, 3);

        arLabel = new QLabel(groupBox_2);
        arLabel->setObjectName(QString::fromUtf8("arLabel"));

        gridLayout_1->addWidget(arLabel, 1, 0, 1, 1);


        videoZoneLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(videoZone);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dirLabel = new QLabel(groupBox);
        dirLabel->setObjectName(QString::fromUtf8("dirLabel"));

        gridLayout_2->addWidget(dirLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        snapshotsDirectory = new QLineEdit(groupBox);
        snapshotsDirectory->setObjectName(QString::fromUtf8("snapshotsDirectory"));

        gridLayout_2->addWidget(snapshotsDirectory, 0, 2, 1, 1);

        snapshotsDirectoryBrowse = new QPushButton(groupBox);
        snapshotsDirectoryBrowse->setObjectName(QString::fromUtf8("snapshotsDirectoryBrowse"));

        gridLayout_2->addWidget(snapshotsDirectoryBrowse, 0, 3, 1, 1);

        prefixLabel = new QLabel(groupBox);
        prefixLabel->setObjectName(QString::fromUtf8("prefixLabel"));

        gridLayout_2->addWidget(prefixLabel, 1, 0, 1, 1);

        snapshotsPrefix = new QLineEdit(groupBox);
        snapshotsPrefix->setObjectName(QString::fromUtf8("snapshotsPrefix"));

        gridLayout_2->addWidget(snapshotsPrefix, 1, 2, 1, 1);

        snapshotsSequentialNumbering = new QCheckBox(groupBox);
        snapshotsSequentialNumbering->setObjectName(QString::fromUtf8("snapshotsSequentialNumbering"));

        gridLayout_2->addWidget(snapshotsSequentialNumbering, 1, 3, 1, 1);

        formatLabel = new QLabel(groupBox);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));

        gridLayout_2->addWidget(formatLabel, 2, 0, 1, 1);

        snapshotsFormat = new QComboBox(groupBox);
        snapshotsFormat->setObjectName(QString::fromUtf8("snapshotsFormat"));

        gridLayout_2->addWidget(snapshotsFormat, 2, 2, 1, 1);


        videoZoneLayout->addWidget(groupBox);


        verticalLayout_3->addWidget(videoZone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        voutLabel->setBuddy(outputModule);
        fullscreenScreenLabel->setBuddy(fullscreenScreenBox);
        kvaVideoModeLabel->setBuddy(kvaVideoMode);
        deinterLabel->setBuddy(deinterlaceBox);
        deinterModeLabel->setBuddy(deinterlaceModeBox);
        arLabel->setBuddy(arLine);
        dirLabel->setBuddy(snapshotsDirectory);
        prefixLabel->setBuddy(snapshotsPrefix);
        formatLabel->setBuddy(snapshotsFormat);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(enableVideo, fullscreen);
        QWidget::setTabOrder(fullscreen, windowDecorations);
        QWidget::setTabOrder(windowDecorations, outputModule);
        QWidget::setTabOrder(outputModule, fullscreenScreenBox);
        QWidget::setTabOrder(fullscreenScreenBox, overlay);
        QWidget::setTabOrder(overlay, hwYUVBox);
        QWidget::setTabOrder(hwYUVBox, kvaFixT23);
        QWidget::setTabOrder(kvaFixT23, kvaVideoMode);
        QWidget::setTabOrder(kvaVideoMode, deinterlaceBox);
        QWidget::setTabOrder(deinterlaceBox, deinterlaceModeBox);
        QWidget::setTabOrder(deinterlaceModeBox, arLine);
        QWidget::setTabOrder(arLine, snapshotsDirectory);
        QWidget::setTabOrder(snapshotsDirectory, snapshotsDirectoryBrowse);
        QWidget::setTabOrder(snapshotsDirectoryBrowse, snapshotsPrefix);
        QWidget::setTabOrder(snapshotsPrefix, snapshotsSequentialNumbering);
        QWidget::setTabOrder(snapshotsSequentialNumbering, snapshotsFormat);

        retranslateUi(SPrefsVideo);

        QMetaObject::connectSlotsByName(SPrefsVideo);
    } // setupUi

    void retranslateUi(QWidget *SPrefsVideo)
    {
        SPrefsVideo->setWindowTitle(Q_("Form", nullptr));
        enableVideo->setText(Q_("Enable video", nullptr));
        displayBox->setTitle(Q_("Display", nullptr));
        voutLabel->setText(Q_("O&utput", nullptr));
        windowDecorations->setText(Q_("Window decorations", nullptr));
        fullscreen->setText(Q_("Fullscreen", nullptr));
        fullscreenScreenLabel->setText(Q_("Fullscreen Video Device", nullptr));
        directXBox->setTitle(Q_("DirectX", nullptr));
        hwYUVBox->setText(Q_("Use hardware YUV->RGB conversions", nullptr));
        overlay->setText(Q_("Accelerated video output (Overlay)", nullptr));
        kvaBox->setTitle(Q_("KVA", nullptr));
        kvaFixT23->setText(Q_("Enable a workaround for T23", nullptr));
        kvaVideoModeLabel->setText(Q_("Video mode", nullptr));
        groupBox_2->setTitle(Q_("Video", nullptr));
        deinterLabel->setText(Q_("Deinterlacing", nullptr));
        deinterModeLabel->setText(Q_("Mode", nullptr));
        arLabel->setText(Q_("Force Aspect Ratio", nullptr));
        groupBox->setTitle(Q_("Video snapshots", nullptr));
        dirLabel->setText(Q_("Directory", nullptr));
        snapshotsDirectoryBrowse->setText(Q_("Browse...", nullptr));
        prefixLabel->setText(Q_("Prefix", nullptr));
        snapshotsPrefix->setText(Q_("vlc-snap", nullptr));
        snapshotsSequentialNumbering->setText(Q_("Sequential numbering", nullptr));
        formatLabel->setText(Q_("Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SPrefsVideo: public Ui_SPrefsVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPREFS_VIDEO_H
