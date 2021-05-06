#ifndef PAIEMENT_H
#define PAIEMENT_H
#include"facture.h"
#include"commande.h"
#include <QPropertyAnimation>

#include <QDialog>
#include<QLabel>
#include <QMediaPlayer>

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMessageBox>
#include <QKeyEvent>
#include <QLayout>
#include <QSlider>

#include "getframe.h"

namespace Ui {
class paiement;
}
class QMediaPlayer;

class paiement : public QDialog
{
    Q_OBJECT

public:
    explicit paiement(QWidget *parent = nullptr);
    ~paiement();

      void fnClearPixmap();


private slots:
    void on_Boutonajouter_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_recherche_clicked();

    void on_pushButton_8_clicked();

    void on_imprimerbt_clicked();

    void on_Boutonajouter_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_modif_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    void on_recherche_2_clicked();

    void on_stat_clicked();

    void on_pushButton_6_clicked();

    void on_imprimerbt_2_clicked();
    void showtime();

    void on_pushButton_10_clicked();

    void on_date_2_linkActivated(const QString &link);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_music_clicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_stop_clicked();

    void on_mute_clicked();

    void on_progressBar_valueChanged(int value);








    void GetFrame(QPixmap pix);

    void keyPressEvent(QKeyEvent *ev);

    void on_play_2_clicked();

    void on_directory_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_sliderMoved(int position);

    void on_comboBox_3_activated(int index);

Q_SIGNALS:
  //  void fnClearPixmap();





private:

    void SetTimeLabel();
    Ui::paiement *ui;
    facture tmpfacture  ;
    commande tmpc ;
    QPropertyAnimation *animation ;
         QPropertyAnimation *animation2 ;
         QString lng="fr" ;
         QMediaPlayer *click ;
         QMediaPlayer *mMediaplayer;


         QMediaPlayer *player;
         QVideoWidget *videoWidget;
         QVBoxLayout *layout;
         QSlider *slider;
         bool pause = false;

         //Working with frames
         QMediaPlayer file_player;
         myQAbstractVideoSurface *vsur;
         QPixmap pixmap;
         int fileCounter = 0;



};

#endif // PAIEMENT_H
