#-------------------------------------------------
#
# Project created by QtCreator 2018-10-31T08:31:47
#
#-------------------------------------------------

QT+= core gui printsupport
QT+= sql
QT += core gui charts
QT += core gui network
QT += network
QT += widgets
QT +=multimedia
QT +=multimediawidgets


CONFIG+=console


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    Evenement_Collaborateur.cpp \
    RESERVATION.cpp \
    Reserver.cpp \
    affectation.cpp \
    chat.cpp \
    client.cpp \
    collaborateur.cpp \
    commande.cpp \
    evenement.cpp \
    facture.cpp \
    getframe.cpp \
    homepage.cpp \
    ingredient.cpp \
    ingredient_plat.cpp \
    livraison.cpp \
    livraison_veichule.cpp \
    login.cpp \
        main.cpp \
    connexion.cpp \
    notification.cpp\
    paiement.cpp \
    plat.cpp \
    qcustomplot.cpp \
    secdialog.cpp \
    smtp.cpp \
    stati.cpp \
    tableprinter.cpp \
    vehicule.cpp

HEADERS += \
    Evenement_Collaborateur.h \
    RESERVATION.h \
    Reserver.h \
    affectation.h \
    chat.h \
    client.h \
    collaborateur.h \
    commande.h \
    connexion.h \
    evenement.h \
    facture.h \
    getframe.h \
    homepage.h \
    ingredient.h \
    ingredient_plat.h \
    livraison.h \
    livraison_veichule.h \
    login.h \
    notification.h\
    paiement.h \
    plat.h \
    qcustomplot.h \
    secdialog.h \
    smtp.h \
    stati.h \
    tableprinter.h \
    vehicule.h

FORMS += \
    Evenement_Collaborateur.ui \
    Reserver.ui \
    chat.ui \
    homepage.ui \
    ingredient_plat.ui \
    livraison_veichule.ui \
    login.ui \
    paiement.ui \
    secdialog.ui \
    stati.ui
RC_ICONS=logo.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc \
    image.qrc \
    image.qrc \
    image.qrc \
    images.qrc \
    images.qrc \
    images.qrc \
    images.qrc \
    images.qrc \
    ressources.qrc \
    ressources.qrc \
    ressources.qrc

DISTFILES += \
    32621859132_25f783b550_o.jpg \
    af198f54e8998017943f5942d5374e4f.jpg \
    bkg.jpg \
    images/Empty.png \
    images/background.jpg \
    images/background1.jpg \
    images/client_reservation.jpg \
    images/employe_conge.png \
    images/livraison_reclamation.jpg \
    images/menu_ingredient.jpg \
    images/paiement_facture.jpg \
    logo.ico \
    next.png \
    next1.png \
    restau.jpg \
    restau.png \
    restaurant-confortable-gens-serveur_175935-230.jpg \
    resto.jpg \
    surrender-natalie-taylor-lyrics.mp3 \
    white.png
