/********************************************************************************
** Form generated from reading UI file 'HierarchyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIERARCHYWIDGET_H
#define UI_HIERARCHYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GameObjectTreeInspector.h"

QT_BEGIN_NAMESPACE

class Ui_HierarchyViewer
{
public:
    QVBoxLayout *verticalLayout;
    GameObjectTreeInspector *treeWidget;
    QTabWidget *tabWidget;
    QWidget *TransformTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_PositionX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_PositionY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_PositionZ;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_RotationZ;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_RotationX;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_RotationY;
    QHBoxLayout *horizontalLayout_18;
    QDial *dial_RotationX;
    QHBoxLayout *horizontalLayout_29;
    QDial *dial_RotationY;
    QHBoxLayout *horizontalLayout_30;
    QDial *dial_RotationZ;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_38;
    QDoubleSpinBox *doubleSpinBox_ScaleFactor;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_ScaleX;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_ScaleY;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_ScaleZ;
    QHBoxLayout *horizontalLayout_44;
    QPushButton *pushButton_Scale001;
    QPushButton *pushButton_Scale01;
    QPushButton *pushButton_Scale1;
    QPushButton *pushButton_Scale10;
    QPushButton *pushButton_Scale100;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Reset;
    QWidget *PupetTab;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_37;
    QComboBox *comboBox_BehaviourType;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_41;
    QDoubleSpinBox *doubleSpinBox_PuppetDuration;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_34;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_40;
    QDoubleSpinBox *doubleSpinBox_PuppetSpeedX;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_51;
    QDoubleSpinBox *doubleSpinBox_PuppetSpeedY;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_54;
    QDoubleSpinBox *doubleSpinBox_PuppetSpeedZ;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_PuppetGo;
    QPushButton *pushButton_PuppetStop;
    QWidget *RenderingTab;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_40;
    QRadioButton *radioButton_Fill;
    QRadioButton *radioButton_Line;
    QRadioButton *radioButton_Point;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_42;
    QComboBox *comboBox_SahderFiles;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QSlider *horizontalSlider_ShininessStrength;
    QDoubleSpinBox *doubleSpinBox_ShininessStrength;
    QHBoxLayout *horizontalLayout_14;
    QSlider *horizontalSlider_Shininess;
    QDoubleSpinBox *doubleSpinBox_Shininess;
    QLabel *label_43;
    QLabel *label_44;
    QGraphicsView *graphicsView_AmbientColorPicker;
    QGraphicsView *graphicsView_DiffuseColorPicker;
    QGraphicsView *graphicsView_EmissiveColorPicker;
    QLabel *label_46;
    QLabel *label_45;
    QGraphicsView *graphicsView_SpecularColorPicker;
    QLabel *label_48;
    QLabel *label_56;
    QLabel *label_47;
    QHBoxLayout *horizontalLayout_37;
    QSlider *horizontalSlider_Roughness;
    QDoubleSpinBox *doubleSpinBox_Roughness;
    QLabel *label_55;
    QHBoxLayout *horizontalLayout_38;
    QSlider *horizontalSlider_fresnelReflectance;
    QDoubleSpinBox *doubleSpinBox_fresnelReflectance;
    QLabel *label_67;
    QDoubleSpinBox *doubleSpinBox_refractiveIndex;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_4;
    QGraphicsView *graphicsView_SpecularMapPicker;
    QGraphicsView *graphicsView_EmissiveMapPicker;
    QGraphicsView *graphicsView_NormalMapPicker;
    QGraphicsView *graphicsView_DiffuseMapPicker;
    QCheckBox *checkBox_DiffuseMap;
    QCheckBox *checkBox_NormalMap;
    QCheckBox *checkBox_SpecularMap;
    QCheckBox *checkBox_EmissiveMap;
    QWidget *ParticleTab;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_EmitRate;
    QLabel *label_13;
    QLabel *label_32;
    QDoubleSpinBox *doubleSpinBox_Mass;
    QLabel *label_18;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_Size;
    QDoubleSpinBox *doubleSpinBox_GravityFactor;
    QLabel *label_17;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_15;
    QSlider *horizontalSlider_EmitAmount;
    QSpinBox *spinBox_EmitAmount;
    QDoubleSpinBox *doubleSpinBox_MinLife;
    QDoubleSpinBox *doubleSpinBox_MaxLife;
    QLabel *label_19;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_RandomColor;
    QGraphicsView *graphicsView_ColorPicker;
    QLabel *label_16;
    QCheckBox *checkBox_EnableCollision;
    QLabel *label_33;
    QDoubleSpinBox *doubleSpinBox_Restitution;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_36;
    QGraphicsView *graphicsView_ParticleTexturePicker;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_ForceX;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_ForceY;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_23;
    QDoubleSpinBox *doubleSpinBox_ForceZ;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_25;
    QDoubleSpinBox *doubleSpinBox_MinVelocityX;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_26;
    QDoubleSpinBox *doubleSpinBox_MinVelocityY;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_27;
    QDoubleSpinBox *doubleSpinBox_MinVelocityZ;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_29;
    QDoubleSpinBox *doubleSpinBox_MaxVelocityX;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_30;
    QDoubleSpinBox *doubleSpinBox_MaxVelocityY;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_31;
    QDoubleSpinBox *doubleSpinBox_MaxVelocityZ;
    QWidget *LightTab;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView_LightColorPicker;
    QLabel *label_57;
    QComboBox *comboBox_LightType;
    QLabel *label_58;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_43;
    QSlider *horizontalSlider_LightIntensity;
    QDoubleSpinBox *doubleSpinBox_LightIntensity;
    QGroupBox *groupBox_LightAtt;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_39;
    QSlider *horizontalSlider_LightAttConst;
    QDoubleSpinBox *doubleSpinBox_LightAttConst;
    QHBoxLayout *horizontalLayout_41;
    QSlider *horizontalSlider_LightAttLinear;
    QDoubleSpinBox *doubleSpinBox_LightAttLinear;
    QHBoxLayout *horizontalLayout_42;
    QSlider *horizontalSlider_LightAttQuad;
    QDoubleSpinBox *doubleSpinBox_LightAttQuad;
    QWidget *RigidBodyTab;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_24;
    QGridLayout *gridLayout_7;
    QLabel *label_39;
    QDoubleSpinBox *doubleSpinBox_RigidBodyGravityFactor;
    QLabel *label_59;
    QLabel *label_65;
    QComboBox *comboBox_RigidBodyMotionType;
    QDoubleSpinBox *doubleSpinBox_RigidBodyMass;
    QLabel *label_64;
    QHBoxLayout *horizontalLayout_50;
    QSlider *horizontalSlider_RigidBodyRestitution;
    QDoubleSpinBox *doubleSpinBox_RigidBodyRestitution;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_RigidBody_BoxSize;
    QLabel *label_60;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_61;
    QDoubleSpinBox *doubleSpinBox_RigidBodySizeX;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_62;
    QDoubleSpinBox *doubleSpinBox_RigidBodySizeY;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_63;
    QDoubleSpinBox *doubleSpinBox_RigidBodySizeZ;
    QHBoxLayout *horizontalLayout_RigidBody_SphereSize;
    QLabel *label_66;
    QDoubleSpinBox *doubleSpinBox_RigidBodyRadius;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_68;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_69;
    QDoubleSpinBox *doubleSpinBox_RigidBodyLinearVelocityX;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_70;
    QDoubleSpinBox *doubleSpinBox_RigidBodyLinearVelocityY;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_71;
    QDoubleSpinBox *doubleSpinBox_RigidBodyLinearVelocityZ;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_72;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_73;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularVelocityX;
    QHBoxLayout *horizontalLayout_58;
    QLabel *label_74;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularVelocityY;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_75;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularVelocityZ;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_76;
    QLabel *label_92;
    QHBoxLayout *horizontalLayout_77;
    QLabel *label_93;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulseX;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_94;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulseY;
    QHBoxLayout *horizontalLayout_79;
    QLabel *label_95;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulseZ;
    QHBoxLayout *horizontalLayout_80;
    QLabel *label_96;
    QHBoxLayout *horizontalLayout_81;
    QLabel *label_97;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulsePointX;
    QHBoxLayout *horizontalLayout_82;
    QLabel *label_98;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulsePointY;
    QHBoxLayout *horizontalLayout_83;
    QLabel *label_99;
    QDoubleSpinBox *doubleSpinBox_RigidBodyImpulsePointZ;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_92;
    QLabel *label_108;
    QHBoxLayout *horizontalLayout_93;
    QLabel *label_109;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularImpulseX;
    QHBoxLayout *horizontalLayout_94;
    QLabel *label_110;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularImpulseY;
    QHBoxLayout *horizontalLayout_95;
    QLabel *label_111;
    QDoubleSpinBox *doubleSpinBox_RigidBodyAngularImpulseZ;

    void setupUi(QWidget *HierarchyViewer)
    {
        if (HierarchyViewer->objectName().isEmpty())
            HierarchyViewer->setObjectName(QStringLiteral("HierarchyViewer"));
        HierarchyViewer->setEnabled(true);
        HierarchyViewer->resize(364, 845);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HierarchyViewer->sizePolicy().hasHeightForWidth());
        HierarchyViewer->setSizePolicy(sizePolicy);
        HierarchyViewer->setMinimumSize(QSize(220, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        HierarchyViewer->setFont(font);
        verticalLayout = new QVBoxLayout(HierarchyViewer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new GameObjectTreeInspector(HierarchyViewer);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setDragEnabled(true);
        treeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget->setAnimated(true);

        verticalLayout->addWidget(treeWidget);

        tabWidget = new QTabWidget(HierarchyViewer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(220, 450));
        tabWidget->setMaximumSize(QSize(16777215, 450));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        TransformTab = new QWidget();
        TransformTab->setObjectName(QStringLiteral("TransformTab"));
        verticalLayout_2 = new QVBoxLayout(TransformTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(TransformTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        doubleSpinBox_PositionX = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_PositionX->setObjectName(QStringLiteral("doubleSpinBox_PositionX"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(doubleSpinBox_PositionX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_PositionX->setSizePolicy(sizePolicy2);
        doubleSpinBox_PositionX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_PositionX->setMinimum(-100000);
        doubleSpinBox_PositionX->setMaximum(100000);
        doubleSpinBox_PositionX->setSingleStep(0.1);

        horizontalLayout->addWidget(doubleSpinBox_PositionX);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        doubleSpinBox_PositionY = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_PositionY->setObjectName(QStringLiteral("doubleSpinBox_PositionY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_PositionY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_PositionY->setSizePolicy(sizePolicy2);
        doubleSpinBox_PositionY->setMinimum(-100000);
        doubleSpinBox_PositionY->setMaximum(100000);
        doubleSpinBox_PositionY->setSingleStep(0.1);

        horizontalLayout_2->addWidget(doubleSpinBox_PositionY);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        doubleSpinBox_PositionZ = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_PositionZ->setObjectName(QStringLiteral("doubleSpinBox_PositionZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_PositionZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_PositionZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_PositionZ->setMinimum(-100000);
        doubleSpinBox_PositionZ->setMaximum(100000);
        doubleSpinBox_PositionZ->setSingleStep(0.1);
        doubleSpinBox_PositionZ->setValue(0);

        horizontalLayout_3->addWidget(doubleSpinBox_PositionZ);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(TransformTab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        doubleSpinBox_RotationZ = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_RotationZ->setObjectName(QStringLiteral("doubleSpinBox_RotationZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RotationZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RotationZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RotationZ->setMinimum(-180);
        doubleSpinBox_RotationZ->setMaximum(180);
        doubleSpinBox_RotationZ->setSingleStep(10);

        horizontalLayout_8->addWidget(doubleSpinBox_RotationZ);


        gridLayout_5->addLayout(horizontalLayout_8, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        doubleSpinBox_RotationX = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_RotationX->setObjectName(QStringLiteral("doubleSpinBox_RotationX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RotationX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RotationX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RotationX->setMinimum(-180);
        doubleSpinBox_RotationX->setMaximum(180);
        doubleSpinBox_RotationX->setSingleStep(10);

        horizontalLayout_6->addWidget(doubleSpinBox_RotationX);


        gridLayout_5->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        doubleSpinBox_RotationY = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_RotationY->setObjectName(QStringLiteral("doubleSpinBox_RotationY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RotationY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RotationY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RotationY->setMinimum(-180);
        doubleSpinBox_RotationY->setMaximum(180);
        doubleSpinBox_RotationY->setSingleStep(10);

        horizontalLayout_7->addWidget(doubleSpinBox_RotationY);


        gridLayout_5->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        dial_RotationX = new QDial(groupBox_5);
        dial_RotationX->setObjectName(QStringLiteral("dial_RotationX"));
        dial_RotationX->setMinimum(-180);
        dial_RotationX->setMaximum(180);
        dial_RotationX->setWrapping(true);
        dial_RotationX->setNotchTarget(5);
        dial_RotationX->setNotchesVisible(false);

        horizontalLayout_18->addWidget(dial_RotationX);


        gridLayout_5->addLayout(horizontalLayout_18, 1, 0, 1, 1);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        dial_RotationY = new QDial(groupBox_5);
        dial_RotationY->setObjectName(QStringLiteral("dial_RotationY"));
        dial_RotationY->setMinimum(-180);
        dial_RotationY->setMaximum(180);
        dial_RotationY->setWrapping(true);
        dial_RotationY->setNotchTarget(5);
        dial_RotationY->setNotchesVisible(false);

        horizontalLayout_29->addWidget(dial_RotationY);


        gridLayout_5->addLayout(horizontalLayout_29, 1, 1, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        dial_RotationZ = new QDial(groupBox_5);
        dial_RotationZ->setObjectName(QStringLiteral("dial_RotationZ"));
        dial_RotationZ->setMinimum(-180);
        dial_RotationZ->setMaximum(180);
        dial_RotationZ->setWrapping(true);
        dial_RotationZ->setNotchTarget(5);
        dial_RotationZ->setNotchesVisible(false);

        horizontalLayout_30->addWidget(dial_RotationZ);


        gridLayout_5->addLayout(horizontalLayout_30, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(TransformTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_17 = new QVBoxLayout(groupBox_4);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_45->addWidget(label_38);

        doubleSpinBox_ScaleFactor = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_ScaleFactor->setObjectName(QStringLiteral("doubleSpinBox_ScaleFactor"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ScaleFactor->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ScaleFactor->setSizePolicy(sizePolicy2);
        doubleSpinBox_ScaleFactor->setDecimals(4);
        doubleSpinBox_ScaleFactor->setMinimum(0.0001);
        doubleSpinBox_ScaleFactor->setMaximum(100000);
        doubleSpinBox_ScaleFactor->setSingleStep(0.1);
        doubleSpinBox_ScaleFactor->setValue(1);

        horizontalLayout_45->addWidget(doubleSpinBox_ScaleFactor);


        verticalLayout_17->addLayout(horizontalLayout_45);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        doubleSpinBox_ScaleX = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_ScaleX->setObjectName(QStringLiteral("doubleSpinBox_ScaleX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ScaleX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ScaleX->setSizePolicy(sizePolicy2);
        doubleSpinBox_ScaleX->setDecimals(4);
        doubleSpinBox_ScaleX->setMinimum(0.0001);
        doubleSpinBox_ScaleX->setMaximum(100000);
        doubleSpinBox_ScaleX->setSingleStep(0.1);
        doubleSpinBox_ScaleX->setValue(1);

        horizontalLayout_10->addWidget(doubleSpinBox_ScaleX);


        horizontalLayout_17->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        doubleSpinBox_ScaleY = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_ScaleY->setObjectName(QStringLiteral("doubleSpinBox_ScaleY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ScaleY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ScaleY->setSizePolicy(sizePolicy2);
        doubleSpinBox_ScaleY->setDecimals(4);
        doubleSpinBox_ScaleY->setMinimum(0.0001);
        doubleSpinBox_ScaleY->setMaximum(100000);
        doubleSpinBox_ScaleY->setSingleStep(0.1);
        doubleSpinBox_ScaleY->setValue(1);

        horizontalLayout_11->addWidget(doubleSpinBox_ScaleY);


        horizontalLayout_17->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        doubleSpinBox_ScaleZ = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_ScaleZ->setObjectName(QStringLiteral("doubleSpinBox_ScaleZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ScaleZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ScaleZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_ScaleZ->setDecimals(4);
        doubleSpinBox_ScaleZ->setMinimum(0.0001);
        doubleSpinBox_ScaleZ->setMaximum(100000);
        doubleSpinBox_ScaleZ->setSingleStep(0.1);
        doubleSpinBox_ScaleZ->setValue(1);

        horizontalLayout_12->addWidget(doubleSpinBox_ScaleZ);


        horizontalLayout_17->addLayout(horizontalLayout_12);


        verticalLayout_17->addLayout(horizontalLayout_17);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        pushButton_Scale001 = new QPushButton(groupBox_4);
        pushButton_Scale001->setObjectName(QStringLiteral("pushButton_Scale001"));

        horizontalLayout_44->addWidget(pushButton_Scale001);

        pushButton_Scale01 = new QPushButton(groupBox_4);
        pushButton_Scale01->setObjectName(QStringLiteral("pushButton_Scale01"));

        horizontalLayout_44->addWidget(pushButton_Scale01);

        pushButton_Scale1 = new QPushButton(groupBox_4);
        pushButton_Scale1->setObjectName(QStringLiteral("pushButton_Scale1"));

        horizontalLayout_44->addWidget(pushButton_Scale1);

        pushButton_Scale10 = new QPushButton(groupBox_4);
        pushButton_Scale10->setObjectName(QStringLiteral("pushButton_Scale10"));

        horizontalLayout_44->addWidget(pushButton_Scale10);

        pushButton_Scale100 = new QPushButton(groupBox_4);
        pushButton_Scale100->setObjectName(QStringLiteral("pushButton_Scale100"));

        horizontalLayout_44->addWidget(pushButton_Scale100);


        verticalLayout_17->addLayout(horizontalLayout_44);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_Reset = new QPushButton(TransformTab);
        pushButton_Reset->setObjectName(QStringLiteral("pushButton_Reset"));

        verticalLayout_2->addWidget(pushButton_Reset);

        QIcon icon;
        icon.addFile(QStringLiteral(":/circle-icons/full-color/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(TransformTab, icon, QString());
        PupetTab = new QWidget();
        PupetTab->setObjectName(QStringLiteral("PupetTab"));
        verticalLayout_13 = new QVBoxLayout(PupetTab);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        scrollArea_3 = new QScrollArea(PupetTab);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 345, 380));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_37 = new QLabel(scrollAreaWidgetContents_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_36->addWidget(label_37);

        comboBox_BehaviourType = new QComboBox(scrollAreaWidgetContents_3);
        comboBox_BehaviourType->setObjectName(QStringLiteral("comboBox_BehaviourType"));

        horizontalLayout_36->addWidget(comboBox_BehaviourType);


        verticalLayout_3->addLayout(horizontalLayout_36);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_41 = new QLabel(scrollAreaWidgetContents_3);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_35->addWidget(label_41);

        doubleSpinBox_PuppetDuration = new QDoubleSpinBox(scrollAreaWidgetContents_3);
        doubleSpinBox_PuppetDuration->setObjectName(QStringLiteral("doubleSpinBox_PuppetDuration"));
        doubleSpinBox_PuppetDuration->setMinimum(0);
        doubleSpinBox_PuppetDuration->setMaximum(100000);

        horizontalLayout_35->addWidget(doubleSpinBox_PuppetDuration);


        verticalLayout_3->addLayout(horizontalLayout_35);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_34 = new QHBoxLayout(groupBox_6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_40 = new QLabel(groupBox_6);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_31->addWidget(label_40);

        doubleSpinBox_PuppetSpeedX = new QDoubleSpinBox(groupBox_6);
        doubleSpinBox_PuppetSpeedX->setObjectName(QStringLiteral("doubleSpinBox_PuppetSpeedX"));
        doubleSpinBox_PuppetSpeedX->setMinimum(-100000);
        doubleSpinBox_PuppetSpeedX->setMaximum(100000);

        horizontalLayout_31->addWidget(doubleSpinBox_PuppetSpeedX);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_51 = new QLabel(groupBox_6);
        label_51->setObjectName(QStringLiteral("label_51"));

        horizontalLayout_32->addWidget(label_51);

        doubleSpinBox_PuppetSpeedY = new QDoubleSpinBox(groupBox_6);
        doubleSpinBox_PuppetSpeedY->setObjectName(QStringLiteral("doubleSpinBox_PuppetSpeedY"));
        doubleSpinBox_PuppetSpeedY->setMinimum(-100000);
        doubleSpinBox_PuppetSpeedY->setMaximum(100000);

        horizontalLayout_32->addWidget(doubleSpinBox_PuppetSpeedY);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_54 = new QLabel(groupBox_6);
        label_54->setObjectName(QStringLiteral("label_54"));

        horizontalLayout_33->addWidget(label_54);

        doubleSpinBox_PuppetSpeedZ = new QDoubleSpinBox(groupBox_6);
        doubleSpinBox_PuppetSpeedZ->setObjectName(QStringLiteral("doubleSpinBox_PuppetSpeedZ"));
        doubleSpinBox_PuppetSpeedZ->setMinimum(-100000);
        doubleSpinBox_PuppetSpeedZ->setMaximum(100000);

        horizontalLayout_33->addWidget(doubleSpinBox_PuppetSpeedZ);


        horizontalLayout_32->addLayout(horizontalLayout_33);


        horizontalLayout_31->addLayout(horizontalLayout_32);


        horizontalLayout_34->addLayout(horizontalLayout_31);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_PuppetGo = new QPushButton(scrollAreaWidgetContents_3);
        pushButton_PuppetGo->setObjectName(QStringLiteral("pushButton_PuppetGo"));

        verticalLayout_3->addWidget(pushButton_PuppetGo);

        pushButton_PuppetStop = new QPushButton(scrollAreaWidgetContents_3);
        pushButton_PuppetStop->setObjectName(QStringLiteral("pushButton_PuppetStop"));

        verticalLayout_3->addWidget(pushButton_PuppetStop);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_13->addWidget(scrollArea_3);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/circle-icons/full-color/running.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(PupetTab, icon1, QString());
        RenderingTab = new QWidget();
        RenderingTab->setObjectName(QStringLiteral("RenderingTab"));
        verticalLayout_6 = new QVBoxLayout(RenderingTab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollArea = new QScrollArea(RenderingTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 330, 1186));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        horizontalLayout_40 = new QHBoxLayout(groupBox_7);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        radioButton_Fill = new QRadioButton(groupBox_7);
        radioButton_Fill->setObjectName(QStringLiteral("radioButton_Fill"));
        radioButton_Fill->setChecked(true);

        horizontalLayout_40->addWidget(radioButton_Fill);

        radioButton_Line = new QRadioButton(groupBox_7);
        radioButton_Line->setObjectName(QStringLiteral("radioButton_Line"));

        horizontalLayout_40->addWidget(radioButton_Line);

        radioButton_Point = new QRadioButton(groupBox_7);
        radioButton_Point->setObjectName(QStringLiteral("radioButton_Point"));

        horizontalLayout_40->addWidget(radioButton_Point);


        verticalLayout_4->addWidget(groupBox_7);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_42 = new QLabel(scrollAreaWidgetContents);
        label_42->setObjectName(QStringLiteral("label_42"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy3);
        label_42->setMinimumSize(QSize(50, 0));
        label_42->setMaximumSize(QSize(50, 16777215));
        label_42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_42);

        comboBox_SahderFiles = new QComboBox(scrollAreaWidgetContents);
        comboBox_SahderFiles->setObjectName(QStringLiteral("comboBox_SahderFiles"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBox_SahderFiles->sizePolicy().hasHeightForWidth());
        comboBox_SahderFiles->setSizePolicy(sizePolicy4);

        horizontalLayout_16->addWidget(comboBox_SahderFiles);


        verticalLayout_4->addLayout(horizontalLayout_16);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_12 = new QVBoxLayout(groupBox);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSlider_ShininessStrength = new QSlider(groupBox);
        horizontalSlider_ShininessStrength->setObjectName(QStringLiteral("horizontalSlider_ShininessStrength"));
        horizontalSlider_ShininessStrength->setMaximum(100);
        horizontalSlider_ShininessStrength->setValue(100);
        horizontalSlider_ShininessStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_ShininessStrength);

        doubleSpinBox_ShininessStrength = new QDoubleSpinBox(groupBox);
        doubleSpinBox_ShininessStrength->setObjectName(QStringLiteral("doubleSpinBox_ShininessStrength"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(doubleSpinBox_ShininessStrength->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ShininessStrength->setSizePolicy(sizePolicy5);
        doubleSpinBox_ShininessStrength->setMinimumSize(QSize(60, 0));
        doubleSpinBox_ShininessStrength->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_ShininessStrength->setDecimals(4);
        doubleSpinBox_ShininessStrength->setMaximum(1);
        doubleSpinBox_ShininessStrength->setSingleStep(0.1);
        doubleSpinBox_ShininessStrength->setValue(1);

        horizontalLayout_13->addWidget(doubleSpinBox_ShininessStrength);


        gridLayout_3->addLayout(horizontalLayout_13, 4, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSlider_Shininess = new QSlider(groupBox);
        horizontalSlider_Shininess->setObjectName(QStringLiteral("horizontalSlider_Shininess"));
        horizontalSlider_Shininess->setMaximum(100);
        horizontalSlider_Shininess->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(horizontalSlider_Shininess);

        doubleSpinBox_Shininess = new QDoubleSpinBox(groupBox);
        doubleSpinBox_Shininess->setObjectName(QStringLiteral("doubleSpinBox_Shininess"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_Shininess->sizePolicy().hasHeightForWidth());
        doubleSpinBox_Shininess->setSizePolicy(sizePolicy5);
        doubleSpinBox_Shininess->setMinimumSize(QSize(60, 0));
        doubleSpinBox_Shininess->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_Shininess->setDecimals(4);
        doubleSpinBox_Shininess->setMinimum(1);
        doubleSpinBox_Shininess->setMaximum(100);
        doubleSpinBox_Shininess->setSingleStep(0.1);

        horizontalLayout_14->addWidget(doubleSpinBox_Shininess);


        gridLayout_3->addLayout(horizontalLayout_14, 5, 1, 1, 1);

        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QStringLiteral("label_43"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_43->sizePolicy().hasHeightForWidth());
        label_43->setSizePolicy(sizePolicy6);
        label_43->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_43, 0, 0, 1, 1);

        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QStringLiteral("label_44"));
        sizePolicy6.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy6);
        label_44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_44, 1, 0, 1, 1);

        graphicsView_AmbientColorPicker = new QGraphicsView(groupBox);
        graphicsView_AmbientColorPicker->setObjectName(QStringLiteral("graphicsView_AmbientColorPicker"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(graphicsView_AmbientColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_AmbientColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_AmbientColorPicker->setMinimumSize(QSize(20, 20));

        gridLayout_3->addWidget(graphicsView_AmbientColorPicker, 0, 1, 1, 1);

        graphicsView_DiffuseColorPicker = new QGraphicsView(groupBox);
        graphicsView_DiffuseColorPicker->setObjectName(QStringLiteral("graphicsView_DiffuseColorPicker"));
        sizePolicy7.setHeightForWidth(graphicsView_DiffuseColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_DiffuseColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_DiffuseColorPicker->setMinimumSize(QSize(20, 20));

        gridLayout_3->addWidget(graphicsView_DiffuseColorPicker, 1, 1, 1, 1);

        graphicsView_EmissiveColorPicker = new QGraphicsView(groupBox);
        graphicsView_EmissiveColorPicker->setObjectName(QStringLiteral("graphicsView_EmissiveColorPicker"));
        sizePolicy7.setHeightForWidth(graphicsView_EmissiveColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_EmissiveColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_EmissiveColorPicker->setMinimumSize(QSize(20, 20));

        gridLayout_3->addWidget(graphicsView_EmissiveColorPicker, 3, 1, 1, 1);

        label_46 = new QLabel(groupBox);
        label_46->setObjectName(QStringLiteral("label_46"));
        sizePolicy6.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy6);
        label_46->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_46, 3, 0, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QStringLiteral("label_45"));
        sizePolicy6.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy6);
        label_45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_45, 2, 0, 1, 1);

        graphicsView_SpecularColorPicker = new QGraphicsView(groupBox);
        graphicsView_SpecularColorPicker->setObjectName(QStringLiteral("graphicsView_SpecularColorPicker"));
        sizePolicy7.setHeightForWidth(graphicsView_SpecularColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_SpecularColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_SpecularColorPicker->setMinimumSize(QSize(20, 20));

        gridLayout_3->addWidget(graphicsView_SpecularColorPicker, 2, 1, 1, 1);

        label_48 = new QLabel(groupBox);
        label_48->setObjectName(QStringLiteral("label_48"));
        sizePolicy6.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy6);
        label_48->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_48, 5, 0, 1, 1);

        label_56 = new QLabel(groupBox);
        label_56->setObjectName(QStringLiteral("label_56"));
        sizePolicy6.setHeightForWidth(label_56->sizePolicy().hasHeightForWidth());
        label_56->setSizePolicy(sizePolicy6);
        label_56->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_56, 7, 0, 1, 1);

        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QStringLiteral("label_47"));
        sizePolicy6.setHeightForWidth(label_47->sizePolicy().hasHeightForWidth());
        label_47->setSizePolicy(sizePolicy6);
        label_47->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_47, 4, 0, 1, 1);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        horizontalSlider_Roughness = new QSlider(groupBox);
        horizontalSlider_Roughness->setObjectName(QStringLiteral("horizontalSlider_Roughness"));
        horizontalSlider_Roughness->setMaximum(100);
        horizontalSlider_Roughness->setValue(100);
        horizontalSlider_Roughness->setOrientation(Qt::Horizontal);

        horizontalLayout_37->addWidget(horizontalSlider_Roughness);

        doubleSpinBox_Roughness = new QDoubleSpinBox(groupBox);
        doubleSpinBox_Roughness->setObjectName(QStringLiteral("doubleSpinBox_Roughness"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_Roughness->sizePolicy().hasHeightForWidth());
        doubleSpinBox_Roughness->setSizePolicy(sizePolicy5);
        doubleSpinBox_Roughness->setMinimumSize(QSize(60, 0));
        doubleSpinBox_Roughness->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_Roughness->setDecimals(4);
        doubleSpinBox_Roughness->setMinimum(0.01);
        doubleSpinBox_Roughness->setMaximum(1);
        doubleSpinBox_Roughness->setSingleStep(0.01);
        doubleSpinBox_Roughness->setValue(1);

        horizontalLayout_37->addWidget(doubleSpinBox_Roughness);


        gridLayout_3->addLayout(horizontalLayout_37, 6, 1, 1, 1);

        label_55 = new QLabel(groupBox);
        label_55->setObjectName(QStringLiteral("label_55"));
        sizePolicy6.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy6);
        label_55->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_55, 6, 0, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        horizontalSlider_fresnelReflectance = new QSlider(groupBox);
        horizontalSlider_fresnelReflectance->setObjectName(QStringLiteral("horizontalSlider_fresnelReflectance"));
        horizontalSlider_fresnelReflectance->setMaximum(100);
        horizontalSlider_fresnelReflectance->setValue(100);
        horizontalSlider_fresnelReflectance->setOrientation(Qt::Horizontal);

        horizontalLayout_38->addWidget(horizontalSlider_fresnelReflectance);

        doubleSpinBox_fresnelReflectance = new QDoubleSpinBox(groupBox);
        doubleSpinBox_fresnelReflectance->setObjectName(QStringLiteral("doubleSpinBox_fresnelReflectance"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_fresnelReflectance->sizePolicy().hasHeightForWidth());
        doubleSpinBox_fresnelReflectance->setSizePolicy(sizePolicy5);
        doubleSpinBox_fresnelReflectance->setMinimumSize(QSize(60, 0));
        doubleSpinBox_fresnelReflectance->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_fresnelReflectance->setDecimals(4);
        doubleSpinBox_fresnelReflectance->setMaximum(1);
        doubleSpinBox_fresnelReflectance->setSingleStep(0.1);
        doubleSpinBox_fresnelReflectance->setValue(1);

        horizontalLayout_38->addWidget(doubleSpinBox_fresnelReflectance);


        gridLayout_3->addLayout(horizontalLayout_38, 7, 1, 1, 1);

        label_67 = new QLabel(groupBox);
        label_67->setObjectName(QStringLiteral("label_67"));
        sizePolicy6.setHeightForWidth(label_67->sizePolicy().hasHeightForWidth());
        label_67->setSizePolicy(sizePolicy6);
        label_67->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_67, 8, 0, 1, 1);

        doubleSpinBox_refractiveIndex = new QDoubleSpinBox(groupBox);
        doubleSpinBox_refractiveIndex->setObjectName(QStringLiteral("doubleSpinBox_refractiveIndex"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_refractiveIndex->sizePolicy().hasHeightForWidth());
        doubleSpinBox_refractiveIndex->setSizePolicy(sizePolicy2);
        doubleSpinBox_refractiveIndex->setMinimumSize(QSize(0, 0));
        doubleSpinBox_refractiveIndex->setMaximumSize(QSize(16777215, 16777215));
        doubleSpinBox_refractiveIndex->setDecimals(4);
        doubleSpinBox_refractiveIndex->setMinimum(1);
        doubleSpinBox_refractiveIndex->setMaximum(100);
        doubleSpinBox_refractiveIndex->setSingleStep(0.1);
        doubleSpinBox_refractiveIndex->setValue(1);

        gridLayout_3->addWidget(doubleSpinBox_refractiveIndex, 8, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout_3);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_15 = new QVBoxLayout(groupBox_2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        graphicsView_SpecularMapPicker = new QGraphicsView(groupBox_2);
        graphicsView_SpecularMapPicker->setObjectName(QStringLiteral("graphicsView_SpecularMapPicker"));
        sizePolicy5.setHeightForWidth(graphicsView_SpecularMapPicker->sizePolicy().hasHeightForWidth());
        graphicsView_SpecularMapPicker->setSizePolicy(sizePolicy5);
        graphicsView_SpecularMapPicker->setMinimumSize(QSize(180, 180));
        graphicsView_SpecularMapPicker->setMaximumSize(QSize(180, 180));

        gridLayout_4->addWidget(graphicsView_SpecularMapPicker, 2, 1, 1, 1);

        graphicsView_EmissiveMapPicker = new QGraphicsView(groupBox_2);
        graphicsView_EmissiveMapPicker->setObjectName(QStringLiteral("graphicsView_EmissiveMapPicker"));
        sizePolicy5.setHeightForWidth(graphicsView_EmissiveMapPicker->sizePolicy().hasHeightForWidth());
        graphicsView_EmissiveMapPicker->setSizePolicy(sizePolicy5);
        graphicsView_EmissiveMapPicker->setMinimumSize(QSize(180, 180));
        graphicsView_EmissiveMapPicker->setMaximumSize(QSize(180, 180));

        gridLayout_4->addWidget(graphicsView_EmissiveMapPicker, 3, 1, 1, 1);

        graphicsView_NormalMapPicker = new QGraphicsView(groupBox_2);
        graphicsView_NormalMapPicker->setObjectName(QStringLiteral("graphicsView_NormalMapPicker"));
        sizePolicy5.setHeightForWidth(graphicsView_NormalMapPicker->sizePolicy().hasHeightForWidth());
        graphicsView_NormalMapPicker->setSizePolicy(sizePolicy5);
        graphicsView_NormalMapPicker->setMinimumSize(QSize(180, 180));
        graphicsView_NormalMapPicker->setMaximumSize(QSize(180, 180));

        gridLayout_4->addWidget(graphicsView_NormalMapPicker, 1, 1, 1, 1);

        graphicsView_DiffuseMapPicker = new QGraphicsView(groupBox_2);
        graphicsView_DiffuseMapPicker->setObjectName(QStringLiteral("graphicsView_DiffuseMapPicker"));
        sizePolicy5.setHeightForWidth(graphicsView_DiffuseMapPicker->sizePolicy().hasHeightForWidth());
        graphicsView_DiffuseMapPicker->setSizePolicy(sizePolicy5);
        graphicsView_DiffuseMapPicker->setMinimumSize(QSize(180, 180));
        graphicsView_DiffuseMapPicker->setMaximumSize(QSize(180, 180));

        gridLayout_4->addWidget(graphicsView_DiffuseMapPicker, 0, 1, 1, 1);

        checkBox_DiffuseMap = new QCheckBox(groupBox_2);
        checkBox_DiffuseMap->setObjectName(QStringLiteral("checkBox_DiffuseMap"));

        gridLayout_4->addWidget(checkBox_DiffuseMap, 0, 0, 1, 1);

        checkBox_NormalMap = new QCheckBox(groupBox_2);
        checkBox_NormalMap->setObjectName(QStringLiteral("checkBox_NormalMap"));
        sizePolicy1.setHeightForWidth(checkBox_NormalMap->sizePolicy().hasHeightForWidth());
        checkBox_NormalMap->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(checkBox_NormalMap, 1, 0, 1, 1);

        checkBox_SpecularMap = new QCheckBox(groupBox_2);
        checkBox_SpecularMap->setObjectName(QStringLiteral("checkBox_SpecularMap"));

        gridLayout_4->addWidget(checkBox_SpecularMap, 2, 0, 1, 1);

        checkBox_EmissiveMap = new QCheckBox(groupBox_2);
        checkBox_EmissiveMap->setObjectName(QStringLiteral("checkBox_EmissiveMap"));

        gridLayout_4->addWidget(checkBox_EmissiveMap, 3, 0, 1, 1);


        verticalLayout_15->addLayout(gridLayout_4);


        verticalLayout_4->addWidget(groupBox_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        tabWidget->addTab(RenderingTab, QString());
        ParticleTab = new QWidget();
        ParticleTab->setObjectName(QStringLiteral("ParticleTab"));
        verticalLayout_7 = new QVBoxLayout(ParticleTab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        scrollArea_2 = new QScrollArea(ParticleTab);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 335, 688));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        doubleSpinBox_EmitRate = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_EmitRate->setObjectName(QStringLiteral("doubleSpinBox_EmitRate"));
        doubleSpinBox_EmitRate->setDecimals(5);
        doubleSpinBox_EmitRate->setMaximum(1e+06);
        doubleSpinBox_EmitRate->setSingleStep(0.01);
        doubleSpinBox_EmitRate->setValue(0);

        gridLayout->addWidget(doubleSpinBox_EmitRate, 3, 2, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        label_32 = new QLabel(scrollAreaWidgetContents_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_32, 1, 0, 1, 1);

        doubleSpinBox_Mass = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Mass->setObjectName(QStringLiteral("doubleSpinBox_Mass"));
        doubleSpinBox_Mass->setDecimals(5);
        doubleSpinBox_Mass->setMaximum(1e+06);
        doubleSpinBox_Mass->setSingleStep(0.5);
        doubleSpinBox_Mass->setValue(0);

        gridLayout->addWidget(doubleSpinBox_Mass, 0, 2, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        doubleSpinBox_Size = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Size->setObjectName(QStringLiteral("doubleSpinBox_Size"));
        doubleSpinBox_Size->setDecimals(5);
        doubleSpinBox_Size->setMaximum(1e+06);
        doubleSpinBox_Size->setSingleStep(0.5);
        doubleSpinBox_Size->setValue(0);

        gridLayout->addWidget(doubleSpinBox_Size, 2, 2, 1, 1);

        doubleSpinBox_GravityFactor = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_GravityFactor->setObjectName(QStringLiteral("doubleSpinBox_GravityFactor"));
        doubleSpinBox_GravityFactor->setDecimals(5);
        doubleSpinBox_GravityFactor->setMinimum(-1e+06);
        doubleSpinBox_GravityFactor->setMaximum(1e+06);
        doubleSpinBox_GravityFactor->setSingleStep(0.2);
        doubleSpinBox_GravityFactor->setValue(0);

        gridLayout->addWidget(doubleSpinBox_GravityFactor, 1, 2, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSlider_EmitAmount = new QSlider(scrollAreaWidgetContents_2);
        horizontalSlider_EmitAmount->setObjectName(QStringLiteral("horizontalSlider_EmitAmount"));
        horizontalSlider_EmitAmount->setMaximum(40);
        horizontalSlider_EmitAmount->setValue(0);
        horizontalSlider_EmitAmount->setOrientation(Qt::Horizontal);
        horizontalSlider_EmitAmount->setInvertedAppearance(false);
        horizontalSlider_EmitAmount->setInvertedControls(false);
        horizontalSlider_EmitAmount->setTickPosition(QSlider::NoTicks);

        horizontalLayout_15->addWidget(horizontalSlider_EmitAmount);

        spinBox_EmitAmount = new QSpinBox(scrollAreaWidgetContents_2);
        spinBox_EmitAmount->setObjectName(QStringLiteral("spinBox_EmitAmount"));
        spinBox_EmitAmount->setMaximum(40);
        spinBox_EmitAmount->setValue(0);

        horizontalLayout_15->addWidget(spinBox_EmitAmount);


        gridLayout->addLayout(horizontalLayout_15, 4, 2, 1, 1);

        doubleSpinBox_MinLife = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MinLife->setObjectName(QStringLiteral("doubleSpinBox_MinLife"));
        doubleSpinBox_MinLife->setDecimals(5);
        doubleSpinBox_MinLife->setMaximum(1e+06);
        doubleSpinBox_MinLife->setSingleStep(5);
        doubleSpinBox_MinLife->setValue(0);

        gridLayout->addWidget(doubleSpinBox_MinLife, 5, 2, 1, 1);

        doubleSpinBox_MaxLife = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MaxLife->setObjectName(QStringLiteral("doubleSpinBox_MaxLife"));
        doubleSpinBox_MaxLife->setDecimals(5);
        doubleSpinBox_MaxLife->setMaximum(1e+06);
        doubleSpinBox_MaxLife->setSingleStep(5);
        doubleSpinBox_MaxLife->setValue(0);

        gridLayout->addWidget(doubleSpinBox_MaxLife, 6, 2, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 6, 0, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        sizePolicy6.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy6);
        label_34->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_34, 9, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBox_RandomColor = new QCheckBox(scrollAreaWidgetContents_2);
        checkBox_RandomColor->setObjectName(QStringLiteral("checkBox_RandomColor"));

        horizontalLayout_5->addWidget(checkBox_RandomColor);

        graphicsView_ColorPicker = new QGraphicsView(scrollAreaWidgetContents_2);
        graphicsView_ColorPicker->setObjectName(QStringLiteral("graphicsView_ColorPicker"));
        sizePolicy7.setHeightForWidth(graphicsView_ColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_ColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_ColorPicker->setMinimumSize(QSize(20, 20));

        horizontalLayout_5->addWidget(graphicsView_ColorPicker);


        gridLayout->addLayout(horizontalLayout_5, 9, 2, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 7, 0, 1, 1);

        checkBox_EnableCollision = new QCheckBox(scrollAreaWidgetContents_2);
        checkBox_EnableCollision->setObjectName(QStringLiteral("checkBox_EnableCollision"));

        gridLayout->addWidget(checkBox_EnableCollision, 7, 2, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout->addWidget(label_33, 8, 0, 1, 1);

        doubleSpinBox_Restitution = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_Restitution->setObjectName(QStringLiteral("doubleSpinBox_Restitution"));
        doubleSpinBox_Restitution->setEnabled(true);
        doubleSpinBox_Restitution->setMaximum(1);
        doubleSpinBox_Restitution->setSingleStep(0.1);
        doubleSpinBox_Restitution->setValue(0);

        gridLayout->addWidget(doubleSpinBox_Restitution, 8, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_36 = new QLabel(scrollAreaWidgetContents_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy6.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy6);
        label_36->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_36);

        graphicsView_ParticleTexturePicker = new QGraphicsView(scrollAreaWidgetContents_2);
        graphicsView_ParticleTexturePicker->setObjectName(QStringLiteral("graphicsView_ParticleTexturePicker"));
        sizePolicy7.setHeightForWidth(graphicsView_ParticleTexturePicker->sizePolicy().hasHeightForWidth());
        graphicsView_ParticleTexturePicker->setSizePolicy(sizePolicy7);
        graphicsView_ParticleTexturePicker->setMinimumSize(QSize(256, 256));

        horizontalLayout_9->addWidget(graphicsView_ParticleTexturePicker);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_20);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_21 = new QLabel(scrollAreaWidgetContents_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_20->addWidget(label_21);

        doubleSpinBox_ForceX = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_ForceX->setObjectName(QStringLiteral("doubleSpinBox_ForceX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ForceX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ForceX->setSizePolicy(sizePolicy2);
        doubleSpinBox_ForceX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_ForceX->setMinimum(-100000);
        doubleSpinBox_ForceX->setMaximum(100000);
        doubleSpinBox_ForceX->setSingleStep(10);

        horizontalLayout_20->addWidget(doubleSpinBox_ForceX);


        verticalLayout_9->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_22 = new QLabel(scrollAreaWidgetContents_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_21->addWidget(label_22);

        doubleSpinBox_ForceY = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_ForceY->setObjectName(QStringLiteral("doubleSpinBox_ForceY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ForceY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ForceY->setSizePolicy(sizePolicy2);
        doubleSpinBox_ForceY->setMinimum(-100000);
        doubleSpinBox_ForceY->setMaximum(100000);
        doubleSpinBox_ForceY->setSingleStep(10);
        doubleSpinBox_ForceY->setValue(0);

        horizontalLayout_21->addWidget(doubleSpinBox_ForceY);


        verticalLayout_9->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_23 = new QLabel(scrollAreaWidgetContents_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_22->addWidget(label_23);

        doubleSpinBox_ForceZ = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_ForceZ->setObjectName(QStringLiteral("doubleSpinBox_ForceZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_ForceZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_ForceZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_ForceZ->setMinimum(-100000);
        doubleSpinBox_ForceZ->setMaximum(100000);
        doubleSpinBox_ForceZ->setSingleStep(10);
        doubleSpinBox_ForceZ->setValue(0);

        horizontalLayout_22->addWidget(doubleSpinBox_ForceZ);


        verticalLayout_9->addLayout(horizontalLayout_22);


        horizontalLayout_19->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_24 = new QLabel(scrollAreaWidgetContents_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_24);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_25 = new QLabel(scrollAreaWidgetContents_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_23->addWidget(label_25);

        doubleSpinBox_MinVelocityX = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MinVelocityX->setObjectName(QStringLiteral("doubleSpinBox_MinVelocityX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MinVelocityX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MinVelocityX->setSizePolicy(sizePolicy2);
        doubleSpinBox_MinVelocityX->setMinimum(-100000);
        doubleSpinBox_MinVelocityX->setMaximum(100000);
        doubleSpinBox_MinVelocityX->setSingleStep(1);
        doubleSpinBox_MinVelocityX->setValue(0);

        horizontalLayout_23->addWidget(doubleSpinBox_MinVelocityX);


        verticalLayout_10->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_26 = new QLabel(scrollAreaWidgetContents_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_24->addWidget(label_26);

        doubleSpinBox_MinVelocityY = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MinVelocityY->setObjectName(QStringLiteral("doubleSpinBox_MinVelocityY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MinVelocityY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MinVelocityY->setSizePolicy(sizePolicy2);
        doubleSpinBox_MinVelocityY->setMinimum(-100000);
        doubleSpinBox_MinVelocityY->setMaximum(100000);
        doubleSpinBox_MinVelocityY->setSingleStep(1);
        doubleSpinBox_MinVelocityY->setValue(0);

        horizontalLayout_24->addWidget(doubleSpinBox_MinVelocityY);


        verticalLayout_10->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_27 = new QLabel(scrollAreaWidgetContents_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_25->addWidget(label_27);

        doubleSpinBox_MinVelocityZ = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MinVelocityZ->setObjectName(QStringLiteral("doubleSpinBox_MinVelocityZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MinVelocityZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MinVelocityZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_MinVelocityZ->setMinimum(-100000);
        doubleSpinBox_MinVelocityZ->setMaximum(100000);
        doubleSpinBox_MinVelocityZ->setSingleStep(1);
        doubleSpinBox_MinVelocityZ->setValue(0);

        horizontalLayout_25->addWidget(doubleSpinBox_MinVelocityZ);


        verticalLayout_10->addLayout(horizontalLayout_25);


        horizontalLayout_19->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_28 = new QLabel(scrollAreaWidgetContents_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        sizePolicy6.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy6);
        label_28->setMinimumSize(QSize(0, 0));
        label_28->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_28);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_29 = new QLabel(scrollAreaWidgetContents_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_26->addWidget(label_29);

        doubleSpinBox_MaxVelocityX = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MaxVelocityX->setObjectName(QStringLiteral("doubleSpinBox_MaxVelocityX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MaxVelocityX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MaxVelocityX->setSizePolicy(sizePolicy2);
        doubleSpinBox_MaxVelocityX->setMinimum(-100000);
        doubleSpinBox_MaxVelocityX->setMaximum(100000);
        doubleSpinBox_MaxVelocityX->setSingleStep(1);
        doubleSpinBox_MaxVelocityX->setValue(0);

        horizontalLayout_26->addWidget(doubleSpinBox_MaxVelocityX);


        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_30 = new QLabel(scrollAreaWidgetContents_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_27->addWidget(label_30);

        doubleSpinBox_MaxVelocityY = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MaxVelocityY->setObjectName(QStringLiteral("doubleSpinBox_MaxVelocityY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MaxVelocityY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MaxVelocityY->setSizePolicy(sizePolicy2);
        doubleSpinBox_MaxVelocityY->setMinimum(-100000);
        doubleSpinBox_MaxVelocityY->setMaximum(100000);
        doubleSpinBox_MaxVelocityY->setSingleStep(1);
        doubleSpinBox_MaxVelocityY->setValue(0);

        horizontalLayout_27->addWidget(doubleSpinBox_MaxVelocityY);


        verticalLayout_11->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_31 = new QLabel(scrollAreaWidgetContents_2);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_28->addWidget(label_31);

        doubleSpinBox_MaxVelocityZ = new QDoubleSpinBox(scrollAreaWidgetContents_2);
        doubleSpinBox_MaxVelocityZ->setObjectName(QStringLiteral("doubleSpinBox_MaxVelocityZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_MaxVelocityZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_MaxVelocityZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_MaxVelocityZ->setMinimum(-100000);
        doubleSpinBox_MaxVelocityZ->setMaximum(100000);
        doubleSpinBox_MaxVelocityZ->setSingleStep(1);
        doubleSpinBox_MaxVelocityZ->setValue(0);

        horizontalLayout_28->addWidget(doubleSpinBox_MaxVelocityZ);


        verticalLayout_11->addLayout(horizontalLayout_28);


        horizontalLayout_19->addLayout(verticalLayout_11);


        verticalLayout_8->addLayout(horizontalLayout_19);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(scrollArea_2);

        tabWidget->addTab(ParticleTab, QString());
        LightTab = new QWidget();
        LightTab->setObjectName(QStringLiteral("LightTab"));
        verticalLayout_5 = new QVBoxLayout(LightTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollArea_4 = new QScrollArea(LightTab);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 320, 397));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        graphicsView_LightColorPicker = new QGraphicsView(scrollAreaWidgetContents_4);
        graphicsView_LightColorPicker->setObjectName(QStringLiteral("graphicsView_LightColorPicker"));
        sizePolicy7.setHeightForWidth(graphicsView_LightColorPicker->sizePolicy().hasHeightForWidth());
        graphicsView_LightColorPicker->setSizePolicy(sizePolicy7);
        graphicsView_LightColorPicker->setMinimumSize(QSize(20, 20));

        gridLayout_2->addWidget(graphicsView_LightColorPicker, 1, 1, 1, 1);

        label_57 = new QLabel(scrollAreaWidgetContents_4);
        label_57->setObjectName(QStringLiteral("label_57"));
        sizePolicy3.setHeightForWidth(label_57->sizePolicy().hasHeightForWidth());
        label_57->setSizePolicy(sizePolicy3);
        label_57->setMinimumSize(QSize(50, 0));
        label_57->setMaximumSize(QSize(50, 16777215));
        label_57->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_57, 0, 0, 1, 1);

        comboBox_LightType = new QComboBox(scrollAreaWidgetContents_4);
        comboBox_LightType->setObjectName(QStringLiteral("comboBox_LightType"));
        sizePolicy3.setHeightForWidth(comboBox_LightType->sizePolicy().hasHeightForWidth());
        comboBox_LightType->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBox_LightType, 0, 1, 1, 1);

        label_58 = new QLabel(scrollAreaWidgetContents_4);
        label_58->setObjectName(QStringLiteral("label_58"));
        sizePolicy3.setHeightForWidth(label_58->sizePolicy().hasHeightForWidth());
        label_58->setSizePolicy(sizePolicy3);
        label_58->setMinimumSize(QSize(50, 0));
        label_58->setMaximumSize(QSize(50, 16777215));
        label_58->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_58, 1, 0, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_4);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_2->addWidget(label_35, 2, 0, 1, 1);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        horizontalSlider_LightIntensity = new QSlider(scrollAreaWidgetContents_4);
        horizontalSlider_LightIntensity->setObjectName(QStringLiteral("horizontalSlider_LightIntensity"));
        sizePolicy3.setHeightForWidth(horizontalSlider_LightIntensity->sizePolicy().hasHeightForWidth());
        horizontalSlider_LightIntensity->setSizePolicy(sizePolicy3);
        horizontalSlider_LightIntensity->setMaximum(100);
        horizontalSlider_LightIntensity->setValue(100);
        horizontalSlider_LightIntensity->setOrientation(Qt::Horizontal);

        horizontalLayout_43->addWidget(horizontalSlider_LightIntensity);

        doubleSpinBox_LightIntensity = new QDoubleSpinBox(scrollAreaWidgetContents_4);
        doubleSpinBox_LightIntensity->setObjectName(QStringLiteral("doubleSpinBox_LightIntensity"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_LightIntensity->sizePolicy().hasHeightForWidth());
        doubleSpinBox_LightIntensity->setSizePolicy(sizePolicy5);
        doubleSpinBox_LightIntensity->setMinimumSize(QSize(60, 0));
        doubleSpinBox_LightIntensity->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_LightIntensity->setDecimals(4);
        doubleSpinBox_LightIntensity->setMaximum(1);
        doubleSpinBox_LightIntensity->setSingleStep(0.1);
        doubleSpinBox_LightIntensity->setValue(1);

        horizontalLayout_43->addWidget(doubleSpinBox_LightIntensity);


        gridLayout_2->addLayout(horizontalLayout_43, 2, 1, 1, 1);


        verticalLayout_16->addLayout(gridLayout_2);

        groupBox_LightAtt = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_LightAtt->setObjectName(QStringLiteral("groupBox_LightAtt"));
        verticalLayout_14 = new QVBoxLayout(groupBox_LightAtt);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_3 = new QLabel(groupBox_LightAtt);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_LightAtt);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox_LightAtt);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        horizontalSlider_LightAttConst = new QSlider(groupBox_LightAtt);
        horizontalSlider_LightAttConst->setObjectName(QStringLiteral("horizontalSlider_LightAttConst"));
        sizePolicy3.setHeightForWidth(horizontalSlider_LightAttConst->sizePolicy().hasHeightForWidth());
        horizontalSlider_LightAttConst->setSizePolicy(sizePolicy3);
        horizontalSlider_LightAttConst->setMaximum(100);
        horizontalSlider_LightAttConst->setValue(100);
        horizontalSlider_LightAttConst->setOrientation(Qt::Horizontal);

        horizontalLayout_39->addWidget(horizontalSlider_LightAttConst);

        doubleSpinBox_LightAttConst = new QDoubleSpinBox(groupBox_LightAtt);
        doubleSpinBox_LightAttConst->setObjectName(QStringLiteral("doubleSpinBox_LightAttConst"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_LightAttConst->sizePolicy().hasHeightForWidth());
        doubleSpinBox_LightAttConst->setSizePolicy(sizePolicy5);
        doubleSpinBox_LightAttConst->setMinimumSize(QSize(60, 0));
        doubleSpinBox_LightAttConst->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_LightAttConst->setDecimals(4);
        doubleSpinBox_LightAttConst->setMaximum(1);
        doubleSpinBox_LightAttConst->setSingleStep(0.1);
        doubleSpinBox_LightAttConst->setValue(1);

        horizontalLayout_39->addWidget(doubleSpinBox_LightAttConst);


        gridLayout_6->addLayout(horizontalLayout_39, 0, 1, 1, 1);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        horizontalSlider_LightAttLinear = new QSlider(groupBox_LightAtt);
        horizontalSlider_LightAttLinear->setObjectName(QStringLiteral("horizontalSlider_LightAttLinear"));
        sizePolicy3.setHeightForWidth(horizontalSlider_LightAttLinear->sizePolicy().hasHeightForWidth());
        horizontalSlider_LightAttLinear->setSizePolicy(sizePolicy3);
        horizontalSlider_LightAttLinear->setMaximum(100);
        horizontalSlider_LightAttLinear->setValue(100);
        horizontalSlider_LightAttLinear->setOrientation(Qt::Horizontal);

        horizontalLayout_41->addWidget(horizontalSlider_LightAttLinear);

        doubleSpinBox_LightAttLinear = new QDoubleSpinBox(groupBox_LightAtt);
        doubleSpinBox_LightAttLinear->setObjectName(QStringLiteral("doubleSpinBox_LightAttLinear"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_LightAttLinear->sizePolicy().hasHeightForWidth());
        doubleSpinBox_LightAttLinear->setSizePolicy(sizePolicy5);
        doubleSpinBox_LightAttLinear->setMinimumSize(QSize(60, 0));
        doubleSpinBox_LightAttLinear->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_LightAttLinear->setDecimals(4);
        doubleSpinBox_LightAttLinear->setMaximum(1);
        doubleSpinBox_LightAttLinear->setSingleStep(0.1);
        doubleSpinBox_LightAttLinear->setValue(1);

        horizontalLayout_41->addWidget(doubleSpinBox_LightAttLinear);


        gridLayout_6->addLayout(horizontalLayout_41, 1, 1, 1, 1);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        horizontalSlider_LightAttQuad = new QSlider(groupBox_LightAtt);
        horizontalSlider_LightAttQuad->setObjectName(QStringLiteral("horizontalSlider_LightAttQuad"));
        sizePolicy3.setHeightForWidth(horizontalSlider_LightAttQuad->sizePolicy().hasHeightForWidth());
        horizontalSlider_LightAttQuad->setSizePolicy(sizePolicy3);
        horizontalSlider_LightAttQuad->setMaximum(100);
        horizontalSlider_LightAttQuad->setValue(100);
        horizontalSlider_LightAttQuad->setOrientation(Qt::Horizontal);

        horizontalLayout_42->addWidget(horizontalSlider_LightAttQuad);

        doubleSpinBox_LightAttQuad = new QDoubleSpinBox(groupBox_LightAtt);
        doubleSpinBox_LightAttQuad->setObjectName(QStringLiteral("doubleSpinBox_LightAttQuad"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_LightAttQuad->sizePolicy().hasHeightForWidth());
        doubleSpinBox_LightAttQuad->setSizePolicy(sizePolicy5);
        doubleSpinBox_LightAttQuad->setMinimumSize(QSize(60, 0));
        doubleSpinBox_LightAttQuad->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_LightAttQuad->setDecimals(4);
        doubleSpinBox_LightAttQuad->setMaximum(1);
        doubleSpinBox_LightAttQuad->setSingleStep(0.1);
        doubleSpinBox_LightAttQuad->setValue(1);

        horizontalLayout_42->addWidget(doubleSpinBox_LightAttQuad);


        gridLayout_6->addLayout(horizontalLayout_42, 2, 1, 1, 1);


        verticalLayout_14->addLayout(gridLayout_6);


        verticalLayout_16->addWidget(groupBox_LightAtt);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_5->addWidget(scrollArea_4);

        tabWidget->addTab(LightTab, QString());
        RigidBodyTab = new QWidget();
        RigidBodyTab->setObjectName(QStringLiteral("RigidBodyTab"));
        verticalLayout_18 = new QVBoxLayout(RigidBodyTab);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        scrollArea_5 = new QScrollArea(RigidBodyTab);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 398, 509));
        verticalLayout_24 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_39 = new QLabel(scrollAreaWidgetContents_5);
        label_39->setObjectName(QStringLiteral("label_39"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy8);

        gridLayout_7->addWidget(label_39, 0, 0, 1, 1);

        doubleSpinBox_RigidBodyGravityFactor = new QDoubleSpinBox(scrollAreaWidgetContents_5);
        doubleSpinBox_RigidBodyGravityFactor->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyGravityFactor"));
        doubleSpinBox_RigidBodyGravityFactor->setDecimals(2);
        doubleSpinBox_RigidBodyGravityFactor->setMinimum(-1e+06);
        doubleSpinBox_RigidBodyGravityFactor->setMaximum(1e+06);
        doubleSpinBox_RigidBodyGravityFactor->setSingleStep(0.2);
        doubleSpinBox_RigidBodyGravityFactor->setValue(0);

        gridLayout_7->addWidget(doubleSpinBox_RigidBodyGravityFactor, 2, 1, 1, 1);

        label_59 = new QLabel(scrollAreaWidgetContents_5);
        label_59->setObjectName(QStringLiteral("label_59"));

        gridLayout_7->addWidget(label_59, 1, 0, 1, 1);

        label_65 = new QLabel(scrollAreaWidgetContents_5);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_65, 2, 0, 1, 1);

        comboBox_RigidBodyMotionType = new QComboBox(scrollAreaWidgetContents_5);
        comboBox_RigidBodyMotionType->setObjectName(QStringLiteral("comboBox_RigidBodyMotionType"));

        gridLayout_7->addWidget(comboBox_RigidBodyMotionType, 0, 1, 1, 1);

        doubleSpinBox_RigidBodyMass = new QDoubleSpinBox(scrollAreaWidgetContents_5);
        doubleSpinBox_RigidBodyMass->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyMass"));
        doubleSpinBox_RigidBodyMass->setDecimals(2);
        doubleSpinBox_RigidBodyMass->setMaximum(100000);

        gridLayout_7->addWidget(doubleSpinBox_RigidBodyMass, 1, 1, 1, 1);

        label_64 = new QLabel(scrollAreaWidgetContents_5);
        label_64->setObjectName(QStringLiteral("label_64"));

        gridLayout_7->addWidget(label_64, 3, 0, 1, 1);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        horizontalSlider_RigidBodyRestitution = new QSlider(scrollAreaWidgetContents_5);
        horizontalSlider_RigidBodyRestitution->setObjectName(QStringLiteral("horizontalSlider_RigidBodyRestitution"));
        sizePolicy3.setHeightForWidth(horizontalSlider_RigidBodyRestitution->sizePolicy().hasHeightForWidth());
        horizontalSlider_RigidBodyRestitution->setSizePolicy(sizePolicy3);
        horizontalSlider_RigidBodyRestitution->setMaximum(100);
        horizontalSlider_RigidBodyRestitution->setValue(100);
        horizontalSlider_RigidBodyRestitution->setOrientation(Qt::Horizontal);

        horizontalLayout_50->addWidget(horizontalSlider_RigidBodyRestitution);

        doubleSpinBox_RigidBodyRestitution = new QDoubleSpinBox(scrollAreaWidgetContents_5);
        doubleSpinBox_RigidBodyRestitution->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyRestitution"));
        sizePolicy5.setHeightForWidth(doubleSpinBox_RigidBodyRestitution->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyRestitution->setSizePolicy(sizePolicy5);
        doubleSpinBox_RigidBodyRestitution->setMinimumSize(QSize(60, 0));
        doubleSpinBox_RigidBodyRestitution->setMaximumSize(QSize(60, 16777215));
        doubleSpinBox_RigidBodyRestitution->setDecimals(2);
        doubleSpinBox_RigidBodyRestitution->setMaximum(1);
        doubleSpinBox_RigidBodyRestitution->setSingleStep(0.1);
        doubleSpinBox_RigidBodyRestitution->setValue(1);

        horizontalLayout_50->addWidget(doubleSpinBox_RigidBodyRestitution);


        gridLayout_7->addLayout(horizontalLayout_50, 3, 1, 1, 1);


        verticalLayout_24->addLayout(gridLayout_7);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_19 = new QVBoxLayout(groupBox_9);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        horizontalLayout_RigidBody_BoxSize = new QHBoxLayout();
        horizontalLayout_RigidBody_BoxSize->setObjectName(QStringLiteral("horizontalLayout_RigidBody_BoxSize"));
        label_60 = new QLabel(groupBox_9);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout_RigidBody_BoxSize->addWidget(label_60);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        label_61 = new QLabel(groupBox_9);
        label_61->setObjectName(QStringLiteral("label_61"));

        horizontalLayout_47->addWidget(label_61);

        doubleSpinBox_RigidBodySizeX = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_RigidBodySizeX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodySizeX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodySizeX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodySizeX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodySizeX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodySizeX->setDecimals(2);
        doubleSpinBox_RigidBodySizeX->setMinimum(0.01);
        doubleSpinBox_RigidBodySizeX->setMaximum(100000);
        doubleSpinBox_RigidBodySizeX->setSingleStep(0.1);
        doubleSpinBox_RigidBodySizeX->setValue(1);

        horizontalLayout_47->addWidget(doubleSpinBox_RigidBodySizeX);


        horizontalLayout_RigidBody_BoxSize->addLayout(horizontalLayout_47);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        label_62 = new QLabel(groupBox_9);
        label_62->setObjectName(QStringLiteral("label_62"));

        horizontalLayout_48->addWidget(label_62);

        doubleSpinBox_RigidBodySizeY = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_RigidBodySizeY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodySizeY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodySizeY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodySizeY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodySizeY->setDecimals(2);
        doubleSpinBox_RigidBodySizeY->setMinimum(0.01);
        doubleSpinBox_RigidBodySizeY->setMaximum(100000);
        doubleSpinBox_RigidBodySizeY->setSingleStep(0.1);
        doubleSpinBox_RigidBodySizeY->setValue(1);

        horizontalLayout_48->addWidget(doubleSpinBox_RigidBodySizeY);


        horizontalLayout_RigidBody_BoxSize->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        label_63 = new QLabel(groupBox_9);
        label_63->setObjectName(QStringLiteral("label_63"));

        horizontalLayout_49->addWidget(label_63);

        doubleSpinBox_RigidBodySizeZ = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_RigidBodySizeZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodySizeZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodySizeZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodySizeZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodySizeZ->setDecimals(2);
        doubleSpinBox_RigidBodySizeZ->setMinimum(0.01);
        doubleSpinBox_RigidBodySizeZ->setMaximum(100000);
        doubleSpinBox_RigidBodySizeZ->setSingleStep(0.1);
        doubleSpinBox_RigidBodySizeZ->setValue(1);

        horizontalLayout_49->addWidget(doubleSpinBox_RigidBodySizeZ);


        horizontalLayout_RigidBody_BoxSize->addLayout(horizontalLayout_49);


        verticalLayout_19->addLayout(horizontalLayout_RigidBody_BoxSize);

        horizontalLayout_RigidBody_SphereSize = new QHBoxLayout();
        horizontalLayout_RigidBody_SphereSize->setObjectName(QStringLiteral("horizontalLayout_RigidBody_SphereSize"));
        label_66 = new QLabel(groupBox_9);
        label_66->setObjectName(QStringLiteral("label_66"));
        sizePolicy8.setHeightForWidth(label_66->sizePolicy().hasHeightForWidth());
        label_66->setSizePolicy(sizePolicy8);

        horizontalLayout_RigidBody_SphereSize->addWidget(label_66);

        doubleSpinBox_RigidBodyRadius = new QDoubleSpinBox(groupBox_9);
        doubleSpinBox_RigidBodyRadius->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyRadius"));
        doubleSpinBox_RigidBodyRadius->setDecimals(2);
        doubleSpinBox_RigidBodyRadius->setMinimum(0.01);
        doubleSpinBox_RigidBodyRadius->setMaximum(100000);
        doubleSpinBox_RigidBodyRadius->setSingleStep(0.1);
        doubleSpinBox_RigidBodyRadius->setValue(1);

        horizontalLayout_RigidBody_SphereSize->addWidget(doubleSpinBox_RigidBodyRadius);


        verticalLayout_19->addLayout(horizontalLayout_RigidBody_SphereSize);


        verticalLayout_24->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        verticalLayout_20 = new QVBoxLayout(groupBox_10);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        label_68 = new QLabel(groupBox_10);
        label_68->setObjectName(QStringLiteral("label_68"));
        sizePolicy8.setHeightForWidth(label_68->sizePolicy().hasHeightForWidth());
        label_68->setSizePolicy(sizePolicy8);
        label_68->setMinimumSize(QSize(45, 0));
        label_68->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_52->addWidget(label_68);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        label_69 = new QLabel(groupBox_10);
        label_69->setObjectName(QStringLiteral("label_69"));

        horizontalLayout_53->addWidget(label_69);

        doubleSpinBox_RigidBodyLinearVelocityX = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyLinearVelocityX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyLinearVelocityX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyLinearVelocityX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyLinearVelocityX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyLinearVelocityX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodyLinearVelocityX->setDecimals(2);
        doubleSpinBox_RigidBodyLinearVelocityX->setMinimum(-100000);
        doubleSpinBox_RigidBodyLinearVelocityX->setMaximum(100000);
        doubleSpinBox_RigidBodyLinearVelocityX->setSingleStep(1);
        doubleSpinBox_RigidBodyLinearVelocityX->setValue(0);

        horizontalLayout_53->addWidget(doubleSpinBox_RigidBodyLinearVelocityX);


        horizontalLayout_52->addLayout(horizontalLayout_53);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        label_70 = new QLabel(groupBox_10);
        label_70->setObjectName(QStringLiteral("label_70"));

        horizontalLayout_54->addWidget(label_70);

        doubleSpinBox_RigidBodyLinearVelocityY = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyLinearVelocityY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyLinearVelocityY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyLinearVelocityY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyLinearVelocityY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyLinearVelocityY->setDecimals(2);
        doubleSpinBox_RigidBodyLinearVelocityY->setMinimum(-100000);
        doubleSpinBox_RigidBodyLinearVelocityY->setMaximum(100000);
        doubleSpinBox_RigidBodyLinearVelocityY->setSingleStep(1);
        doubleSpinBox_RigidBodyLinearVelocityY->setValue(0);

        horizontalLayout_54->addWidget(doubleSpinBox_RigidBodyLinearVelocityY);


        horizontalLayout_52->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        label_71 = new QLabel(groupBox_10);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout_55->addWidget(label_71);

        doubleSpinBox_RigidBodyLinearVelocityZ = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyLinearVelocityZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyLinearVelocityZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyLinearVelocityZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyLinearVelocityZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyLinearVelocityZ->setDecimals(2);
        doubleSpinBox_RigidBodyLinearVelocityZ->setMinimum(-100000);
        doubleSpinBox_RigidBodyLinearVelocityZ->setMaximum(100000);
        doubleSpinBox_RigidBodyLinearVelocityZ->setSingleStep(1);
        doubleSpinBox_RigidBodyLinearVelocityZ->setValue(0);

        horizontalLayout_55->addWidget(doubleSpinBox_RigidBodyLinearVelocityZ);


        horizontalLayout_52->addLayout(horizontalLayout_55);


        verticalLayout_20->addLayout(horizontalLayout_52);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        label_72 = new QLabel(groupBox_10);
        label_72->setObjectName(QStringLiteral("label_72"));
        sizePolicy8.setHeightForWidth(label_72->sizePolicy().hasHeightForWidth());
        label_72->setSizePolicy(sizePolicy8);
        label_72->setMinimumSize(QSize(45, 0));
        label_72->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_56->addWidget(label_72);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        label_73 = new QLabel(groupBox_10);
        label_73->setObjectName(QStringLiteral("label_73"));

        horizontalLayout_57->addWidget(label_73);

        doubleSpinBox_RigidBodyAngularVelocityX = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyAngularVelocityX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularVelocityX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularVelocityX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularVelocityX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularVelocityX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodyAngularVelocityX->setDecimals(2);
        doubleSpinBox_RigidBodyAngularVelocityX->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularVelocityX->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularVelocityX->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularVelocityX->setValue(0);

        horizontalLayout_57->addWidget(doubleSpinBox_RigidBodyAngularVelocityX);


        horizontalLayout_56->addLayout(horizontalLayout_57);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QStringLiteral("horizontalLayout_58"));
        label_74 = new QLabel(groupBox_10);
        label_74->setObjectName(QStringLiteral("label_74"));

        horizontalLayout_58->addWidget(label_74);

        doubleSpinBox_RigidBodyAngularVelocityY = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyAngularVelocityY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularVelocityY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularVelocityY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularVelocityY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularVelocityY->setDecimals(2);
        doubleSpinBox_RigidBodyAngularVelocityY->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularVelocityY->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularVelocityY->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularVelocityY->setValue(0);

        horizontalLayout_58->addWidget(doubleSpinBox_RigidBodyAngularVelocityY);


        horizontalLayout_56->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        label_75 = new QLabel(groupBox_10);
        label_75->setObjectName(QStringLiteral("label_75"));

        horizontalLayout_59->addWidget(label_75);

        doubleSpinBox_RigidBodyAngularVelocityZ = new QDoubleSpinBox(groupBox_10);
        doubleSpinBox_RigidBodyAngularVelocityZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularVelocityZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularVelocityZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularVelocityZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularVelocityZ->setDecimals(2);
        doubleSpinBox_RigidBodyAngularVelocityZ->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularVelocityZ->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularVelocityZ->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularVelocityZ->setValue(0);

        horizontalLayout_59->addWidget(doubleSpinBox_RigidBodyAngularVelocityZ);


        horizontalLayout_56->addLayout(horizontalLayout_59);


        verticalLayout_20->addLayout(horizontalLayout_56);


        verticalLayout_24->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        verticalLayout_21 = new QVBoxLayout(groupBox_11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_76 = new QHBoxLayout();
        horizontalLayout_76->setObjectName(QStringLiteral("horizontalLayout_76"));
        label_92 = new QLabel(groupBox_11);
        label_92->setObjectName(QStringLiteral("label_92"));
        sizePolicy8.setHeightForWidth(label_92->sizePolicy().hasHeightForWidth());
        label_92->setSizePolicy(sizePolicy8);
        label_92->setMinimumSize(QSize(45, 0));
        label_92->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_76->addWidget(label_92);

        horizontalLayout_77 = new QHBoxLayout();
        horizontalLayout_77->setObjectName(QStringLiteral("horizontalLayout_77"));
        label_93 = new QLabel(groupBox_11);
        label_93->setObjectName(QStringLiteral("label_93"));

        horizontalLayout_77->addWidget(label_93);

        doubleSpinBox_RigidBodyImpulseX = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulseX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulseX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulseX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulseX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulseX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodyImpulseX->setDecimals(2);
        doubleSpinBox_RigidBodyImpulseX->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulseX->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulseX->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulseX->setValue(0);

        horizontalLayout_77->addWidget(doubleSpinBox_RigidBodyImpulseX);


        horizontalLayout_76->addLayout(horizontalLayout_77);

        horizontalLayout_78 = new QHBoxLayout();
        horizontalLayout_78->setObjectName(QStringLiteral("horizontalLayout_78"));
        label_94 = new QLabel(groupBox_11);
        label_94->setObjectName(QStringLiteral("label_94"));

        horizontalLayout_78->addWidget(label_94);

        doubleSpinBox_RigidBodyImpulseY = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulseY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulseY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulseY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulseY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulseY->setDecimals(2);
        doubleSpinBox_RigidBodyImpulseY->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulseY->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulseY->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulseY->setValue(0);

        horizontalLayout_78->addWidget(doubleSpinBox_RigidBodyImpulseY);


        horizontalLayout_76->addLayout(horizontalLayout_78);

        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setObjectName(QStringLiteral("horizontalLayout_79"));
        label_95 = new QLabel(groupBox_11);
        label_95->setObjectName(QStringLiteral("label_95"));

        horizontalLayout_79->addWidget(label_95);

        doubleSpinBox_RigidBodyImpulseZ = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulseZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulseZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulseZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulseZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulseZ->setDecimals(2);
        doubleSpinBox_RigidBodyImpulseZ->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulseZ->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulseZ->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulseZ->setValue(0);

        horizontalLayout_79->addWidget(doubleSpinBox_RigidBodyImpulseZ);


        horizontalLayout_76->addLayout(horizontalLayout_79);


        verticalLayout_21->addLayout(horizontalLayout_76);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setObjectName(QStringLiteral("horizontalLayout_80"));
        label_96 = new QLabel(groupBox_11);
        label_96->setObjectName(QStringLiteral("label_96"));
        sizePolicy8.setHeightForWidth(label_96->sizePolicy().hasHeightForWidth());
        label_96->setSizePolicy(sizePolicy8);
        label_96->setMinimumSize(QSize(45, 0));
        label_96->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_80->addWidget(label_96);

        horizontalLayout_81 = new QHBoxLayout();
        horizontalLayout_81->setObjectName(QStringLiteral("horizontalLayout_81"));
        label_97 = new QLabel(groupBox_11);
        label_97->setObjectName(QStringLiteral("label_97"));

        horizontalLayout_81->addWidget(label_97);

        doubleSpinBox_RigidBodyImpulsePointX = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulsePointX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulsePointX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulsePointX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulsePointX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulsePointX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodyImpulsePointX->setDecimals(2);
        doubleSpinBox_RigidBodyImpulsePointX->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulsePointX->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulsePointX->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulsePointX->setValue(0);

        horizontalLayout_81->addWidget(doubleSpinBox_RigidBodyImpulsePointX);


        horizontalLayout_80->addLayout(horizontalLayout_81);

        horizontalLayout_82 = new QHBoxLayout();
        horizontalLayout_82->setObjectName(QStringLiteral("horizontalLayout_82"));
        label_98 = new QLabel(groupBox_11);
        label_98->setObjectName(QStringLiteral("label_98"));

        horizontalLayout_82->addWidget(label_98);

        doubleSpinBox_RigidBodyImpulsePointY = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulsePointY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulsePointY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulsePointY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulsePointY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulsePointY->setDecimals(2);
        doubleSpinBox_RigidBodyImpulsePointY->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulsePointY->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulsePointY->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulsePointY->setValue(0);

        horizontalLayout_82->addWidget(doubleSpinBox_RigidBodyImpulsePointY);


        horizontalLayout_80->addLayout(horizontalLayout_82);

        horizontalLayout_83 = new QHBoxLayout();
        horizontalLayout_83->setObjectName(QStringLiteral("horizontalLayout_83"));
        label_99 = new QLabel(groupBox_11);
        label_99->setObjectName(QStringLiteral("label_99"));

        horizontalLayout_83->addWidget(label_99);

        doubleSpinBox_RigidBodyImpulsePointZ = new QDoubleSpinBox(groupBox_11);
        doubleSpinBox_RigidBodyImpulsePointZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyImpulsePointZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyImpulsePointZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyImpulsePointZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyImpulsePointZ->setDecimals(2);
        doubleSpinBox_RigidBodyImpulsePointZ->setMinimum(-100000);
        doubleSpinBox_RigidBodyImpulsePointZ->setMaximum(100000);
        doubleSpinBox_RigidBodyImpulsePointZ->setSingleStep(1);
        doubleSpinBox_RigidBodyImpulsePointZ->setValue(0);

        horizontalLayout_83->addWidget(doubleSpinBox_RigidBodyImpulsePointZ);


        horizontalLayout_80->addLayout(horizontalLayout_83);


        verticalLayout_21->addLayout(horizontalLayout_80);


        verticalLayout_24->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        verticalLayout_26 = new QVBoxLayout(groupBox_12);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        horizontalLayout_92 = new QHBoxLayout();
        horizontalLayout_92->setObjectName(QStringLiteral("horizontalLayout_92"));
        label_108 = new QLabel(groupBox_12);
        label_108->setObjectName(QStringLiteral("label_108"));
        sizePolicy8.setHeightForWidth(label_108->sizePolicy().hasHeightForWidth());
        label_108->setSizePolicy(sizePolicy8);
        label_108->setMinimumSize(QSize(45, 0));
        label_108->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_92->addWidget(label_108);

        horizontalLayout_93 = new QHBoxLayout();
        horizontalLayout_93->setObjectName(QStringLiteral("horizontalLayout_93"));
        label_109 = new QLabel(groupBox_12);
        label_109->setObjectName(QStringLiteral("label_109"));

        horizontalLayout_93->addWidget(label_109);

        doubleSpinBox_RigidBodyAngularImpulseX = new QDoubleSpinBox(groupBox_12);
        doubleSpinBox_RigidBodyAngularImpulseX->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularImpulseX"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularImpulseX->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularImpulseX->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularImpulseX->setMinimumSize(QSize(0, 0));
        doubleSpinBox_RigidBodyAngularImpulseX->setDecimals(2);
        doubleSpinBox_RigidBodyAngularImpulseX->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularImpulseX->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularImpulseX->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularImpulseX->setValue(0);

        horizontalLayout_93->addWidget(doubleSpinBox_RigidBodyAngularImpulseX);


        horizontalLayout_92->addLayout(horizontalLayout_93);

        horizontalLayout_94 = new QHBoxLayout();
        horizontalLayout_94->setObjectName(QStringLiteral("horizontalLayout_94"));
        label_110 = new QLabel(groupBox_12);
        label_110->setObjectName(QStringLiteral("label_110"));

        horizontalLayout_94->addWidget(label_110);

        doubleSpinBox_RigidBodyAngularImpulseY = new QDoubleSpinBox(groupBox_12);
        doubleSpinBox_RigidBodyAngularImpulseY->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularImpulseY"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularImpulseY->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularImpulseY->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularImpulseY->setDecimals(2);
        doubleSpinBox_RigidBodyAngularImpulseY->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularImpulseY->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularImpulseY->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularImpulseY->setValue(0);

        horizontalLayout_94->addWidget(doubleSpinBox_RigidBodyAngularImpulseY);


        horizontalLayout_92->addLayout(horizontalLayout_94);

        horizontalLayout_95 = new QHBoxLayout();
        horizontalLayout_95->setObjectName(QStringLiteral("horizontalLayout_95"));
        label_111 = new QLabel(groupBox_12);
        label_111->setObjectName(QStringLiteral("label_111"));

        horizontalLayout_95->addWidget(label_111);

        doubleSpinBox_RigidBodyAngularImpulseZ = new QDoubleSpinBox(groupBox_12);
        doubleSpinBox_RigidBodyAngularImpulseZ->setObjectName(QStringLiteral("doubleSpinBox_RigidBodyAngularImpulseZ"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RigidBodyAngularImpulseZ->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RigidBodyAngularImpulseZ->setSizePolicy(sizePolicy2);
        doubleSpinBox_RigidBodyAngularImpulseZ->setDecimals(2);
        doubleSpinBox_RigidBodyAngularImpulseZ->setMinimum(-100000);
        doubleSpinBox_RigidBodyAngularImpulseZ->setMaximum(100000);
        doubleSpinBox_RigidBodyAngularImpulseZ->setSingleStep(1);
        doubleSpinBox_RigidBodyAngularImpulseZ->setValue(0);

        horizontalLayout_95->addWidget(doubleSpinBox_RigidBodyAngularImpulseZ);


        horizontalLayout_92->addLayout(horizontalLayout_95);


        verticalLayout_26->addLayout(horizontalLayout_92);


        verticalLayout_24->addWidget(groupBox_12);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_18->addWidget(scrollArea_5);

        tabWidget->addTab(RigidBodyTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(HierarchyViewer);
        QObject::connect(horizontalSlider_EmitAmount, SIGNAL(valueChanged(int)), spinBox_EmitAmount, SLOT(setValue(int)));
        QObject::connect(spinBox_EmitAmount, SIGNAL(valueChanged(int)), horizontalSlider_EmitAmount, SLOT(setValue(int)));
        QObject::connect(checkBox_EnableCollision, SIGNAL(toggled(bool)), doubleSpinBox_Restitution, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(HierarchyViewer);
    } // setupUi

    void retranslateUi(QWidget *HierarchyViewer)
    {
        HierarchyViewer->setWindowTitle(QApplication::translate("HierarchyViewer", "Hierarchy Inspector", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("HierarchyViewer", "Game Objects", 0));
        groupBox_3->setTitle(QApplication::translate("HierarchyViewer", "Position", 0));
        label_4->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_5->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_6->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        groupBox_5->setTitle(QApplication::translate("HierarchyViewer", "Rotation", 0));
        label_9->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        label_7->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_8->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        groupBox_4->setTitle(QApplication::translate("HierarchyViewer", "Scale", 0));
        label_38->setText(QApplication::translate("HierarchyViewer", "Factor", 0));
        label_10->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_11->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_12->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        pushButton_Scale001->setText(QApplication::translate("HierarchyViewer", "0.01", 0));
        pushButton_Scale01->setText(QApplication::translate("HierarchyViewer", "0.1", 0));
        pushButton_Scale1->setText(QApplication::translate("HierarchyViewer", "1", 0));
        pushButton_Scale10->setText(QApplication::translate("HierarchyViewer", "10", 0));
        pushButton_Scale100->setText(QApplication::translate("HierarchyViewer", "100", 0));
        pushButton_Reset->setText(QApplication::translate("HierarchyViewer", "Reset", 0));
        tabWidget->setTabText(tabWidget->indexOf(TransformTab), QApplication::translate("HierarchyViewer", "Transform", 0));
        label_37->setText(QApplication::translate("HierarchyViewer", "Variable", 0));
        comboBox_BehaviourType->clear();
        comboBox_BehaviourType->insertItems(0, QStringList()
         << QApplication::translate("HierarchyViewer", "Position", 0)
         << QApplication::translate("HierarchyViewer", "Rotation", 0)
         << QApplication::translate("HierarchyViewer", "Scale", 0)
        );
        label_41->setText(QApplication::translate("HierarchyViewer", "Duration", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_PuppetDuration->setToolTip(QApplication::translate("HierarchyViewer", "0 means forever", 0));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("HierarchyViewer", "Speed", 0));
        label_40->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_51->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_54->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        pushButton_PuppetGo->setText(QApplication::translate("HierarchyViewer", "Go", 0));
        pushButton_PuppetStop->setText(QApplication::translate("HierarchyViewer", "Stop", 0));
        tabWidget->setTabText(tabWidget->indexOf(PupetTab), QApplication::translate("HierarchyViewer", "Puppet", 0));
        groupBox_7->setTitle(QApplication::translate("HierarchyViewer", "Rendering Mode", 0));
        radioButton_Fill->setText(QApplication::translate("HierarchyViewer", "Fill", 0));
        radioButton_Line->setText(QApplication::translate("HierarchyViewer", "Line", 0));
        radioButton_Point->setText(QApplication::translate("HierarchyViewer", "Point", 0));
        label_42->setText(QApplication::translate("HierarchyViewer", "Shader", 0));
        groupBox->setTitle(QApplication::translate("HierarchyViewer", "Material", 0));
        label_43->setText(QApplication::translate("HierarchyViewer", "Ambient Color", 0));
        label_44->setText(QApplication::translate("HierarchyViewer", "Diffuse Color", 0));
        label_46->setText(QApplication::translate("HierarchyViewer", "Emissive Color", 0));
        label_45->setText(QApplication::translate("HierarchyViewer", "Specular Color", 0));
        label_48->setText(QApplication::translate("HierarchyViewer", "Specular Power", 0));
        label_56->setText(QApplication::translate("HierarchyViewer", "Fresnel Reflectance", 0));
        label_47->setText(QApplication::translate("HierarchyViewer", "Specular Intensity", 0));
        label_55->setText(QApplication::translate("HierarchyViewer", "Roughness", 0));
        label_67->setText(QApplication::translate("HierarchyViewer", "Refractive Index", 0));
        groupBox_2->setTitle(QApplication::translate("HierarchyViewer", "Texture", 0));
        checkBox_DiffuseMap->setText(QApplication::translate("HierarchyViewer", "Diffuse Map", 0));
        checkBox_NormalMap->setText(QApplication::translate("HierarchyViewer", "Normal Map", 0));
        checkBox_SpecularMap->setText(QApplication::translate("HierarchyViewer", "Specular Map", 0));
        checkBox_EmissiveMap->setText(QApplication::translate("HierarchyViewer", "Emissive Map", 0));
        tabWidget->setTabText(tabWidget->indexOf(RenderingTab), QApplication::translate("HierarchyViewer", "Mesh", 0));
        label_13->setText(QApplication::translate("HierarchyViewer", "Mass", 0));
        label_32->setText(QApplication::translate("HierarchyViewer", "Gravity Factor", 0));
        label_18->setText(QApplication::translate("HierarchyViewer", "Min Life", 0));
        label_14->setText(QApplication::translate("HierarchyViewer", "Size", 0));
        label_17->setText(QApplication::translate("HierarchyViewer", "Emit Amount", 0));
        label_15->setText(QApplication::translate("HierarchyViewer", "Emit Rate", 0));
        label_19->setText(QApplication::translate("HierarchyViewer", "Max Life", 0));
        label_34->setText(QApplication::translate("HierarchyViewer", "Color", 0));
        checkBox_RandomColor->setText(QApplication::translate("HierarchyViewer", "Random", 0));
        label_16->setText(QApplication::translate("HierarchyViewer", "Collision", 0));
        checkBox_EnableCollision->setText(QApplication::translate("HierarchyViewer", "Enable", 0));
        label_33->setText(QApplication::translate("HierarchyViewer", "Restitution", 0));
        label_36->setText(QApplication::translate("HierarchyViewer", "Texture", 0));
        label_20->setText(QApplication::translate("HierarchyViewer", "Force", 0));
        label_21->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_22->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_23->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        label_24->setText(QApplication::translate("HierarchyViewer", "Min Velocity", 0));
        label_25->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_26->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_27->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        label_28->setText(QApplication::translate("HierarchyViewer", "Max Velocity", 0));
        label_29->setText(QApplication::translate("HierarchyViewer", "X", 0));
        label_30->setText(QApplication::translate("HierarchyViewer", "Y", 0));
        label_31->setText(QApplication::translate("HierarchyViewer", "Z", 0));
        tabWidget->setTabText(tabWidget->indexOf(ParticleTab), QApplication::translate("HierarchyViewer", "Particle System", 0));
        label_57->setText(QApplication::translate("HierarchyViewer", "Type", 0));
        comboBox_LightType->clear();
        comboBox_LightType->insertItems(0, QStringList()
         << QApplication::translate("HierarchyViewer", "Point Light", 0)
         << QApplication::translate("HierarchyViewer", "Directional Light", 0)
         << QApplication::translate("HierarchyViewer", "Spot Light", 0)
         << QApplication::translate("HierarchyViewer", "Ambient Light", 0)
         << QApplication::translate("HierarchyViewer", "Area Light", 0)
        );
        label_58->setText(QApplication::translate("HierarchyViewer", "Color", 0));
        label_35->setText(QApplication::translate("HierarchyViewer", "Intensity", 0));
        groupBox_LightAtt->setTitle(QApplication::translate("HierarchyViewer", "Attenuation", 0));
        label_3->setText(QApplication::translate("HierarchyViewer", "Quadratic", 0));
        label_2->setText(QApplication::translate("HierarchyViewer", "Linear", 0));
        label->setText(QApplication::translate("HierarchyViewer", "Constant", 0));
        tabWidget->setTabText(tabWidget->indexOf(LightTab), QApplication::translate("HierarchyViewer", "Light Source", 0));
        label_39->setText(QApplication::translate("HierarchyViewer", "Motion Type", 0));
        label_59->setText(QApplication::translate("HierarchyViewer", "Mass", 0));
        label_65->setText(QApplication::translate("HierarchyViewer", "Gravity Factor", 0));
        comboBox_RigidBodyMotionType->clear();
        comboBox_RigidBodyMotionType->insertItems(0, QStringList()
         << QApplication::translate("HierarchyViewer", "Box", 0)
         << QApplication::translate("HierarchyViewer", "Sphere", 0)
         << QApplication::translate("HierarchyViewer", "Convex Hull", 0)
         << QApplication::translate("HierarchyViewer", "Fixed", 0)
        );
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyMass->setToolTip(QApplication::translate("HierarchyViewer", "Mass of the Rigid Body, Unit: kg", 0));
#endif // QT_NO_TOOLTIP
        label_64->setText(QApplication::translate("HierarchyViewer", "Restitution", 0));
        groupBox_9->setTitle(QApplication::translate("HierarchyViewer", "Size", 0));
        label_60->setText(QApplication::translate("HierarchyViewer", "Extents", 0));
        label_61->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodySizeX->setToolTip(QApplication::translate("HierarchyViewer", "Extents of the box on X axis, Unit: Meter", 0));
#endif // QT_NO_TOOLTIP
        label_62->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodySizeY->setToolTip(QApplication::translate("HierarchyViewer", "Extents of the box on Y axis, Unit: Meter", 0));
#endif // QT_NO_TOOLTIP
        label_63->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodySizeZ->setToolTip(QApplication::translate("HierarchyViewer", "Extents of the box on Z axis, Unit: Meter", 0));
#endif // QT_NO_TOOLTIP
        label_66->setText(QApplication::translate("HierarchyViewer", "Radius", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyRadius->setToolTip(QApplication::translate("HierarchyViewer", "Radius of the sphere, Unit: Meter", 0));
#endif // QT_NO_TOOLTIP
        groupBox_10->setTitle(QApplication::translate("HierarchyViewer", "Velocity", 0));
        label_68->setText(QApplication::translate("HierarchyViewer", "Linear", 0));
        label_69->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyLinearVelocityX->setToolTip(QApplication::translate("HierarchyViewer", "Linear Velocity on X axis, Unit: Meter/Second", 0));
#endif // QT_NO_TOOLTIP
        label_70->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyLinearVelocityY->setToolTip(QApplication::translate("HierarchyViewer", "Linear Velocity on Y axis, Unit: Meter/Second", 0));
#endif // QT_NO_TOOLTIP
        label_71->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyLinearVelocityZ->setToolTip(QApplication::translate("HierarchyViewer", "Linear Velocity on Z axis, Unit: Meter/Second", 0));
#endif // QT_NO_TOOLTIP
        label_72->setText(QApplication::translate("HierarchyViewer", "Angular", 0));
        label_73->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularVelocityX->setToolTip(QApplication::translate("HierarchyViewer", "Angular Velocity on X axis, Unit: Radians/Second", 0));
#endif // QT_NO_TOOLTIP
        label_74->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularVelocityY->setToolTip(QApplication::translate("HierarchyViewer", "Angular Velocity on Y axis, Unit: Radians/Second", 0));
#endif // QT_NO_TOOLTIP
        label_75->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularVelocityZ->setToolTip(QApplication::translate("HierarchyViewer", "Angular Velocity on Z axis, Unit: Radians/Second", 0));
#endif // QT_NO_TOOLTIP
        groupBox_11->setTitle(QApplication::translate("HierarchyViewer", "Point Impulse", 0));
        label_92->setText(QApplication::translate("HierarchyViewer", "Impulse", 0));
        label_93->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulseX->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_94->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulseY->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_95->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulseZ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_96->setText(QApplication::translate("HierarchyViewer", "Point", 0));
        label_97->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulsePointX->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_98->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulsePointY->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_99->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyImpulsePointZ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_12->setTitle(QApplication::translate("HierarchyViewer", "Angular Impulse", 0));
        label_108->setText(QApplication::translate("HierarchyViewer", "Impulse", 0));
        label_109->setText(QApplication::translate("HierarchyViewer", "X", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularImpulseX->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_110->setText(QApplication::translate("HierarchyViewer", "Y", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularImpulseY->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_111->setText(QApplication::translate("HierarchyViewer", "Z", 0));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_RigidBodyAngularImpulseZ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(RigidBodyTab), QApplication::translate("HierarchyViewer", "Rigid Body", 0));
    } // retranslateUi

};

namespace Ui {
    class HierarchyViewer: public Ui_HierarchyViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIERARCHYWIDGET_H
