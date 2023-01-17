#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>


void showGreetingDialog()
{
    bool ok;
    QString name = QInputDialog::getText(0, "Name", "Enter your name:", QLineEdit::Normal, "", &ok);
    if (ok && !name.isEmpty())
    {
        QMessageBox::information(0, "Hello", "Hello, " + name);
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    showGreetingDialog();
    return a.exec();
}
