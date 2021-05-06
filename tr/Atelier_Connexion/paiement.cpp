#include "paiement.h"
#include "commande.h"
#include "ui_paiement.h"
#include"facture.h"
#include<QDialog>
#include <QPrinter>
#include<QPrintDialog>
#include<QTimer>
#include<QDateTime>
#include <QPropertyAnimation>
#include<QFileDialog>


#include<QMediaPlayer>

#include <QFileDialog>
#include <string>

using std::to_string;
using std::string;

paiement::paiement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paiement)
{
    ui->setupUi(this);
    mMediaplayer =new QMediaPlayer(this);
   // connect (mMediaplayer,&QMediaPlayer::positionChanged,[&](qint64 pos ))


   // connect(mMediaplayer, &QMediaPlayer::positionChanged, &QSlider::setMaximum);
    animation = new QPropertyAnimation (ui ->textf,"geometry" );
      // animation = new QPropertyAnimation (ui ->text_2,"geometry" );
       animation->setDuration(10000) ;
       animation->setStartValue(ui->textf->geometry());
       animation->setEndValue(QRect(10,40,741,101)) ;
       animation->start() ;

       click = new QMediaPlayer () ;
        click->setMedia(QUrl("C:/Users/LENOVO/Desktop/click.wav")) ;




    QPixmap pix("C:/Users/LENOVO/Desktop/tr/arriere.jpg");
    ui-> imm ->setPixmap(pix);
    QPixmap piz("C:/Users/LENOVO/Desktop/tr/arriere.jpg");
    ui->image22->setPixmap(piz);





    /***************/
      QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start();
    /*************************date*****************/
    QDate date = QDate ::currentDate();
    QString datee=date.toString();
    ui->date->setText(datee);
    ui->date_2->setText(datee);



    /////////////////////////

    player = new QMediaPlayer(this);
    videoWidget = new QVideoWidget(this);
    layout = new QVBoxLayout();

    layout->addWidget(videoWidget);
    ui->groupBox_2->setLayout(layout);
    player->setVideoOutput(videoWidget);

    connect(player, &QMediaPlayer::durationChanged, ui->horizontalSlider, &QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged, ui->horizontalSlider, &QSlider::setValue);
    ui->directory->setIcon(QIcon(":/new/prefix1/Icons/015-folder.png"));

    this->on_horizontalSlider_2_valueChanged(0);

    //Working with frames
    vsur = new myQAbstractVideoSurface();
    file_player.setVideoOutput(vsur);


};

paiement::~paiement()
{
    delete ui;

    delete vsur;
    delete player;
    delete layout;
    delete videoWidget;
}

void paiement::on_Boutonajouter_clicked()
//ui(new Ui::paiement)
{

    click->play() ;
    QString id =ui->ajoutid->text() ;
    QString mont =ui->ajoutmontant->text() ;
    QString date = ui->ajoutdate->text();
    facture m(id,mont,date) ;
    bool test = m.ajouter_fact();
    if (test)

    {

  ui->tableView->setModel(tmpfacture.afficher_fact()) ;
    }

     }



void paiement::on_pushButton_clicked()
{
    click->play() ;

    ui->tableView->setModel(tmpfacture.afficher_fact()) ;
}

void paiement::on_pushButton_2_clicked()
{

    click->play() ;
    QString id = ui->delete_2->text();
    bool test = tmpfacture.supprimer(id);
    if (test)
    {
       ui->tableView->setModel(tmpfacture.afficher_fact()) ;

}
}

void paiement::on_pushButton_3_clicked()
{
    click->play() ;
    QString l=ui->comboBox->currentText();
        ui->tableView->setModel(tmpfacture.tri(l));
}

void paiement::on_pushButton_7_clicked()
{
    click->play() ;
    QString id =ui->mod2->text();
    QString montant =ui->mod1->text();
    QString date =ui->mod3->text();
    bool test=tmpfacture.modifier(id,montant,date);

    if(test)
    {
       ui->tableView->setModel(tmpfacture.afficher_fact()) ;

    }

}

void paiement::on_recherche_clicked()
{
    click->play() ;
    QString m =ui->cher1->text();
    QString k = ui->che2->text();
    QString l = ui->che3->text();
    if (m != ""){
   ui->tableView->setModel(tmpfacture.chercher_matpar_id(m) );}
    if (l != ""){
   ui->tableView->setModel(tmpfacture.chercher_matpar_mont(k)) ;}
    if (k!= ""){
   ui->tableView->setModel(tmpfacture.chercher_matpar_date(l)) ;}
}

void paiement::on_pushButton_8_clicked()
{
    click->play() ;
    QPrinter printer;
    printer.setPrinterName("remarques ");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec()==QDialog::Rejected)return;
    ui->textEdit->print(&printer);
}

void paiement::on_imprimerbt_clicked()
{
    click->play() ;
    QPrinter printer;
    QPrintDialog *printDialog = new QPrintDialog(&printer, this);
    printDialog->setWindowTitle("Imprimer Document");
    printDialog->exec();
}

void paiement::on_Boutonajouter_2_clicked()

{
    click->play() ;
    QString ref =ui->ref->text() ;
    QString mont =ui->mont->text() ;
    QString date = ui->datec->text();
    QString nom = ui->nom_p->text();

    commande c(ref,mont,date,nom) ;
    bool test = c.ajouter_commande() ;
    if (test)

    {

  ui->tableView_2->setModel(tmpc.afficher_commande()) ;
    }

}

void paiement::on_pushButton_4_clicked()
{

    click->play() ;
        ui->tableView->setModel(tmpfacture.afficher_fact()) ;

}


void paiement::on_pushButton_9_clicked()

{

    click->play() ;
        QString m =ui->cher1->text();
        QString k = ui->che2->text();
        QString l = ui->che3->text();
        if (m != ""){
       ui->tableView->setModel(tmpfacture.chercher_matpar_id(m) );}
        if (l != ""){
       ui->tableView->setModel(tmpfacture.chercher_matpar_mont(k)) ;}
        if (k!= ""){
       ui->tableView->setModel(tmpfacture.chercher_matpar_date(l)) ;}


}

void paiement::on_pushButton_5_clicked()
{

    click->play() ;
        QString ref = ui->delete_r->text();
        bool test = tmpc.supprimer(ref);
        if (test)
        {
           ui->tableView_2->setModel(tmpc.afficher_commande()) ;


}}

void paiement::on_modif_clicked()

{

    click->play() ;

    QString id =ui->modc_1->text();
    QString montant =ui->modc_2->text();
    QString date =ui->modc_3->text();
    QString nom =ui->mod_c4->text();


    bool test=tmpc.modifier_commande(id,montant,date,nom);

    if(test)
    {
       ui->tableView_2->setModel(tmpc.afficher_commande()) ;

    }


}

/*void paiement::on_comboBox_2_activated(const QString &arg1)
{

}

void paiement::on_recherche_2_clicked()
{

}
*/
/*void paiement::on_stat_clicked()
{
    QPieSeries *series = new QPieSeries();
       series->append("stylo",10);
       series->append("imprimentes",30);
       series->append("ordinateur",20);
       series->append("chaises et bureau ",20);
       series->append("materiel de santé ",40);
        series->append("papiers ",30);
       QPieSlice *slice= series->slices().at(1);
       slice->setExploded(true);
       slice->setLabelVisible(true);
       slice->setPen(QPen(Qt::darkGreen,2));
       slice->setBrush(Qt::green);
       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("statistiques");
       QChartView *chartview=new QChartView(chart);
       chartview->setParent(ui->horizontalFrame);
       ui->tabWidget_2->setCurrentIndex(2);

}*/

void paiement::on_pushButton_6_clicked()
{

    click->play() ;
    QString l=ui->comboBox_2->currentText();
        ui->tableView_2->setModel(tmpc.tri(l));
}

void paiement::on_imprimerbt_2_clicked()
{
    click->play() ;
    QPrinter printer;
    QPrintDialog *printDialog = new QPrintDialog(&printer, this);
    printDialog->setWindowTitle("Imprimer Document");
    printDialog->exec();
}
void paiement:: showtime()
{
    QTime time = QTime::currentTime();

    QString time_text=time.toString("hh : mm : ss");
    if((time.second() % 2) == 0 )
    {
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->digitalclock->setText(time_text);
    ui->digitalclock_2->setText(time_text);


}

void paiement::on_pushButton_10_clicked()
{


        click->play() ;
            ui->tableView_2->setModel(tmpc.afficher_commande()) ;


}



void paiement::on_pushButton_11_clicked()
{

}

void paiement::on_pushButton_12_clicked()
{
    click->play();
      lng="fr";

      ui->l1->setText("Réferance");
     // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
      ui->l2->setText("Montant");
      ui->l3->setText("Date");
      ui->label_23->setText("Nom plat");


      ui->l4->setText("Réferance");
      ui->l5->setText("Montant");
      ui->l7->setText("Date");
      ui->l8->setText("Nom plat");

      ui->l9->setText("Réferance");

      ui->pushButton_10->setText("Afficher");
      ui->Boutonajouter_2->setText("Ajouter");
      ui->modif->setText("Appliquer");
     // ui->pushButton_rch_livre->setText("RESEARCH");
      //ui->pushButton_tri_livre->setText("SORTING");
      ui->pushButton_5->setText("Supprimer");
     // ui->non_liv_2->setText("NO");

     /* ui->pushButton_10->setText("Ajouter");
      ui->Boutonajouter_2->setText("Appliquer");
    //  ui->Liv_modifier->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
      ui->modif->setText("Supprimer");
    //  ui->liv_supprimer->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
     // ui->pushButton_rch_livre->setText("recherche");
    //  ui->pushButton_tri_livre->setText("tri");
      ui->pushButton_5->setText("Afficher");*/

   //   ui->non_liv_2->setText("non");
      // ui->Liv_ajouter2->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
}

void paiement::on_pushButton_13_clicked()
{
    click->play();

        lng="ang";
            // page biblo
            ui->l1->setText("Referance");
           // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
            ui->l2->setText("Amount");
            ui->l3->setText("Date");
            ui->label_23->setText("flat name");


            ui->l4->setText("Referance");//Referance
            ui->l5->setText("Amount");//Amount
            ui->l7->setText(" DATE");
            ui->l8->setText("flat name");

            ui->l9->setText("Referance");
            ui->pushButton_10->setText("Display");
            ui->Boutonajouter_2->setText("ADD");
            ui->modif->setText("Edit");
           // ui->pushButton_rch_livre->setText("RESEARCH");
            //ui->pushButton_tri_livre->setText("SORTING");
            ui->pushButton_5->setText("Remove");
           // ui->non_liv_2->setText("NO");
}

void paiement::on_music_clicked()
{
    QString filename =QFileDialog::getOpenFileName(this,"music");


    if(filename.isEmpty()){
        return;
    }
    mMediaplayer->setMedia(QUrl::fromLocalFile(filename));
    mMediaplayer->setVolume(ui->progressBar->value());
    on_play_clicked();
}

void paiement::on_play_clicked()
{
mMediaplayer->play();
}

void paiement::on_pause_clicked()
{
mMediaplayer->pause();
}

void paiement::on_stop_clicked()
{
mMediaplayer->stop();
}

void paiement::on_mute_clicked()
{
    if(ui->mute->text()=="mute"){
        mMediaplayer->setMuted(true);
        ui->mute->setText("unmute");

    }else {
mMediaplayer->setMuted(false);
ui->mute->setText("mute");
}

}

void paiement::on_progressBar_valueChanged(int value)
{
mMediaplayer->setVolume(value);
}

void paiement::on_play_2_clicked()
{
    if (pause) {
        ui->play->setText("Play");
        ui->play->setIcon(QIcon(":/new/prefix1/Icons/022-video.png"));
        pause = false;
        player->pause();
    }
    else {
        ui->play->setText("Pause");
        ui->play->setIcon(QIcon(":/new/prefix1/Icons/023-video-1.png"));
        pause = true;
        player->play();
        //This fixing not controlled video zoom
        videoWidget->resize(videoWidget->width()+1, videoWidget->height());
        videoWidget->resize(videoWidget->width()-1, videoWidget->height());
    }
    this->SetTimeLabel();
}

void paiement::on_directory_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,"Choose videofile..","","*.mp4");
    player->setMedia(QUrl::fromLocalFile(path));

    //Working with frames
    file_player.setMedia(QUrl::fromLocalFile(path));

    connect(vsur, SIGNAL(fnSurfaceStopped(QPixmap)),
            this, SLOT(GetFrame(QPixmap)),Qt::QueuedConnection);

    connect(this, SIGNAL(fnClearPixmap()),
            vsur, SLOT(fnClearPixmap()),Qt::QueuedConnection);
}

void paiement::on_horizontalSlider_2_valueChanged(int value)
{
     player->setVolume(value);
}

void paiement::on_horizontalSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void paiement::on_comboBox_3_activated(int index)
{
    qreal rate = 0;
    switch (index) {
        case 0:
        {
            rate = 1;
            break;
        }
    case 1:
        {
            rate = 0.5;
            break;
        }
    case 2:
        {
            rate = 2;
            break;
        }
    }
        player->setPlaybackRate(rate);
}


void paiement::GetFrame(QPixmap pix)
{
    pixmap = pix;
    file_player.pause();
}

void paiement::SetTimeLabel()
{
    int seconds = static_cast<int>(player->duration()/1000);
    int minutes = 0, hours = 0;
    string stringData;

    if ((minutes = seconds / 60) > 0) seconds -= minutes * 60;
        if ((hours = minutes / 60) > 0)  minutes -= hours * 60;

    if (hours > 9) stringData = to_string(hours) + ":";
    else stringData = to_string(hours) + "0:";

    if (minutes > 9) stringData += to_string(minutes) + ":";
    else stringData += "0" + to_string(minutes) + ":";

    if (seconds > 9) stringData += to_string(seconds);
    else stringData += "0" + to_string(seconds);

    ui->endTime->setText(QString::fromStdString(stringData));

}

void paiement::keyPressEvent(QKeyEvent *ev)
{
    if (ev->key() == Qt::Key_U)
    {
     // emit fnClearPixmap();

        file_player.setPosition(player->position());
        file_player.setMuted(true);
        file_player.play();

        QMessageBox::warning(this,"Info", "Please, set the directory (save field is commented)");
//        QString imagePath = "/Users/kirill/Desktop/BMP test/image"+ QString::fromStdString(to_string(fileCounter)) +".bmp";
//        while (QFile::exists(imagePath)) {
//           fileCounter++;
//           imagePath = "/Users/kirill/Desktop/BMP test/image"+ QString::fromStdString(to_string(fileCounter++)) +".bmp";
//        }
//        QMessageBox::information(this,"Info", "Please, set the screenshot directory (save field is commented)");
//        pixmap.save(imagePath);
    }
}
