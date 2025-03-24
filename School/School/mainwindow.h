#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Класс Учитель
class Teacher {
public:
    QString lastName;
    QString firstName;
    QString middleName;
    QString subject;
    int roomNumber;
};

// Класс Ученик
class Student {
public:
    QString lastName;
    QString firstName;
    QString studentClass;
    QString subject1;
    QString subject2;
    QString subject3;
    int grade1;
    int grade2;
    int grade3;
};

// Класс Кабинет
class Room {
public:
    int number;
    int floor;
    QString theme;
};

// Основной класс MainWindow
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addTeacherButton_clicked(); // Добавить учителя
    void on_addStudentButton_clicked(); // Добавить ученика
    void on_addRoomButton_clicked();    // Добавить кабинет
    void on_queryStudentButton_clicked(); // Успеваемость ученика
    void on_queryTeacherButton_clicked(); // Кабинеты учителя
    void on_queryRoomButton_clicked();    // Список кабинетов по тематике
    void on_refreshTableButton_clicked(); // Обновить таблицу
    void on_saveToFileButton_clicked();   // Сохранить в файл

private:
    Ui::MainWindow *ui;
    QList<Teacher> teachers; // Список учителей
    QList<Student> students; // Список учеников
    QList<Room> rooms;       // Список кабинетов

    void updateTable(const QList<QStringList>& data); // Обновить таблицу
    Teacher* findTeacherByName(const QString& lastName); // Найти учителя по фамилии
    Room* findRoomByNumber(int number); // Найти кабинет по номеру
};

#endif // MAINWINDOW_H
