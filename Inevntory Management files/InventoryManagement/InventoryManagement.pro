QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    srcInventory/addproduct.cpp \
    adminlogin.cpp \
    srcOrder/customerinfo.cpp \
    srcInventory/findproduct.cpp \
    srcInventory/homeinventory.cpp \
    main.cpp \
    myinventory.cpp \
    srcOrder/orderwindow.cpp \
    productInventory.cpp \
    srcOrder/receiptwindow.cpp \
    srcInventory/removeproduct.cpp \
    srcInventory/updateproduct.cpp \
    srcInventory/viewinventory.cpp \
    srcInventory/vieworder.cpp

HEADERS += \
    inventoryHeaders/addproduct.h \
    adminlogin.h \
    orderHeaders/customerinfo.h \
    inventoryHeaders/findproduct.h \
    inventoryHeaders/homeinventory.h \
    myinventory.h \
    orderHeaders/orderwindow.h \
    productInventory.h \
    orderHeaders/receiptwindow.h \
    inventoryHeaders/removeproduct.h \
    inventoryHeaders/updateproduct.h \
    inventoryHeaders/viewinventory.h \
    inventoryHeaders/vieworder.h

FORMS += \
    UI_Inventory/addproduct.ui \
    adminlogin.ui \
    UI_Order/customerinfo.ui \
    UI_Inventory/findproduct.ui \
    UI_Inventory/homeinventory.ui \
    myinventory.ui \
    UI_Order/orderwindow.ui \
    UI_Order/receiptwindow.ui \
    UI_Inventory/removeproduct.ui \
    UI_Inventory/updateproduct.ui \
    UI_Inventory/viewinventory.ui \
    UI_Inventory/vieworder.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    InventoryData/Background.qrc

DISTFILES += \
    InventoryData/bg.jpg
