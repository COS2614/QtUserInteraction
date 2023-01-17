#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>


void showGreetingDialog()
{
    bool ok;
    QString name = QInputDialog::getText(QApplication::activeWindow() ? QApplication::activeWindow() : nullptr, "Name", "Enter your name:", QLineEdit::Normal, "", &ok);
    if (ok && !name.isEmpty())
    {
        QMessageBox::information(QApplication::activeWindow() ? QApplication::activeWindow() : nullptr, "Hello", "Hello, " + name);
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    showGreetingDialog();
    return a.exec();
}
