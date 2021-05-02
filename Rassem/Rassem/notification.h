#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QSystemTrayIcon>
#include<QString>
class Notification
{
public:
    Notification();
    void notification_ajoutCollaborateur();
    void notification_ajoutEvenement();
    void notification_supprimerCollaborateur();
    void notification_supprimerEvenement();
    void notification_modifierCollaborateur();
    void notification_modifierEvenement();
    void mail_Evenement();
    void affecter();






};

#endif // NOTIFICATION_H
