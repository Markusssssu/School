#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Подключение кнопок к слотам
    connect(ui->addTeacherButton, &QPushButton::clicked, this, &MainWindow::on_addTeacherButton_clicked);
    connect(ui->addStudentButton, &QPushButton::clicked, this, &MainWindow::on_addStudentButton_clicked);
    connect(ui->addRoomButton, &QPushButton::clicked, this, &MainWindow::on_addRoomButton_clicked);
    connect(ui->queryStudentButton, &QPushButton::clicked, this, &MainWindow::on_queryStudentButton_clicked);
    connect(ui->queryTeacherButton, &QPushButton::clicked, this, &MainWindow::on_queryTeacherButton_clicked);
    connect(ui->queryRoomButton, &QPushButton::clicked, this, &MainWindow::on_queryRoomButton_clicked);
    connect(ui->refreshTableButton, &QPushButton::clicked, this, &MainWindow::on_refreshTableButton_clicked);
    connect(ui->saveToFileButton, &QPushButton::clicked, this, &MainWindow::on_saveToFileButton_clicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

// Добавить учителя
void MainWindow::on_addTeacherButton_clicked() {
    Teacher newTeacher;
    newTeacher.lastName = ui->teacherLastNameLineEdit->text();
    newTeacher.firstName = ui->teacherFirstNameLineEdit->text();
    newTeacher.middleName = ui->teacherMiddleNameLineEdit->text();
    newTeacher.subject = ui->teacherSubjectLineEdit->text();
    newTeacher.roomNumber = ui->teacherRoomLineEdit->text().toInt();

    teachers.append(newTeacher);
    QMessageBox::information(this, "Успех", "Учитель добавлен!");
}

// Добавить ученика
void MainWindow::on_addStudentButton_clicked() {
    Student newStudent;
    newStudent.lastName = ui->studentLastNameLineEdit->text();
    newStudent.firstName = ui->studentFirstNameLineEdit->text();
    newStudent.studentClass = ui->studentClassLineEdit->text();
    newStudent.subject1 = ui->studentSubject1LineEdit->text();
    newStudent.subject2 = ui->studentSubject2LineEdit->text();
    newStudent.subject3 = ui->studentSubject3LineEdit->text();
    newStudent.grade1 = ui->studentGrade1LineEdit->text().toInt();
    newStudent.grade2 = ui->studentGrade2LineEdit->text().toInt();
    newStudent.grade3 = ui->studentGrade3LineEdit->text().toInt();

    students.append(newStudent);
    QMessageBox::information(this, "Успех", "Ученик добавлен!");
}

// Добавить кабинет
void MainWindow::on_addRoomButton_clicked() {
    Room newRoom;
    newRoom.number = ui->roomNumberLineEdit->text().toInt();
    newRoom.floor = ui->roomFloorLineEdit->text().toInt();
    newRoom.theme = ui->roomThemeLineEdit->text();

    rooms.append(newRoom);
    QMessageBox::information(this, "Успех", "Кабинет добавлен!");
}

// Успеваемость ученика
void MainWindow::on_queryStudentButton_clicked() {
    QString lastName = ui->queryStudentLineEdit->text();
    QList<QStringList> data;

    for (const auto& student : students) {
        if (student.lastName == lastName) {
            QStringList row;
            row << student.lastName << student.firstName << student.studentClass
                << student.subject1 << QString::number(student.grade1)
                << student.subject2 << QString::number(student.grade2)
                << student.subject3 << QString::number(student.grade3);
            data.append(row);
        }
    }

    updateTable(data);
}

// Кабинеты учителя
void MainWindow::on_queryTeacherButton_clicked() {
    QString lastName = ui->queryTeacherLineEdit->text();
    QList<QStringList> data;

    for (const auto& teacher : teachers) {
        if (teacher.lastName == lastName) {
            QStringList row;
            row << teacher.lastName << teacher.firstName << teacher.middleName
                << teacher.subject << QString::number(teacher.roomNumber);
            data.append(row);
        }
    }

    updateTable(data);
}

// Список кабинетов по тематике
void MainWindow::on_queryRoomButton_clicked() {
    QString theme = ui->queryRoomThemeLineEdit->text();
    QList<QStringList> data;

    for (const auto& room : rooms) {
        if (room.theme == theme) {
            QStringList row;
            row << QString::number(room.number) << QString::number(room.floor) << room.theme;
            data.append(row);
        }
    }

    updateTable(data);
}

// Обновить таблицу
void MainWindow::on_refreshTableButton_clicked() {
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    QMessageBox::information(this, "Успех", "Таблица обновлена!");
}

// Сохранить в файл
void MainWindow::on_saveToFileButton_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить таблицу", "", "Текстовые файлы (*.txt)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
            for (int j = 0; j < ui->tableWidget->columnCount(); ++j) {
                stream << ui->tableWidget->item(i, j)->text() << "\t";
            }
            stream << "\n";
        }
        file.close();
        QMessageBox::information(this, "Успех", "Таблица сохранена в файл!");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось сохранить файл!");
    }
}

// Обновить таблицу
void MainWindow::updateTable(const QList<QStringList>& data) {
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(data.size());
    ui->tableWidget->setColumnCount(data.isEmpty() ? 0 : data[0].size());

    for (int i = 0; i < data.size(); ++i) {
        for (int j = 0; j < data[i].size(); ++j) {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(data[i][j]));
        }
    }
}

// Найти учителя по фамилии
Teacher* MainWindow::findTeacherByName(const QString& lastName) {
    for (auto& teacher : teachers) {
        if (teacher.lastName == lastName) {
            return &teacher;
        }
    }
    return nullptr;
}

// Найти кабинет по номеру
Room* MainWindow::findRoomByNumber(int number) {
    for (auto& room : rooms) {
        if (room.number == number) {
            return &room;
        }
    }
    return nullptr;
}
