/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabAddTeacher;
    QGroupBox *groupBoxTeacher;
    QLineEdit *teacherLastNameLineEdit;
    QLineEdit *teacherFirstNameLineEdit;
    QLineEdit *teacherMiddleNameLineEdit;
    QLineEdit *teacherSubjectLineEdit;
    QLineEdit *teacherRoomLineEdit;
    QPushButton *addTeacherButton;
    QWidget *tabAddStudent;
    QGroupBox *groupBoxStudent;
    QLineEdit *studentLastNameLineEdit;
    QLineEdit *studentFirstNameLineEdit;
    QLineEdit *studentClassLineEdit;
    QLineEdit *studentSubject1LineEdit;
    QLineEdit *studentSubject2LineEdit;
    QLineEdit *studentSubject3LineEdit;
    QLineEdit *studentGrade1LineEdit;
    QLineEdit *studentGrade2LineEdit;
    QLineEdit *studentGrade3LineEdit;
    QPushButton *addStudentButton;
    QWidget *tabAddRoom;
    QGroupBox *groupBoxRoom;
    QLineEdit *roomNumberLineEdit;
    QLineEdit *roomFloorLineEdit;
    QLineEdit *roomThemeLineEdit;
    QPushButton *addRoomButton;
    QWidget *tabQueries;
    QGroupBox *groupBoxQueries;
    QLineEdit *queryStudentLineEdit;
    QPushButton *queryStudentButton;
    QLineEdit *queryTeacherLineEdit;
    QPushButton *queryTeacherButton;
    QLineEdit *queryRoomThemeLineEdit;
    QPushButton *queryRoomButton;
    QWidget *tabTable;
    QTableWidget *tableWidget;
    QPushButton *refreshTableButton;
    QPushButton *saveToFileButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 700);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"   QMainWindow {\n"
"       background-color: #000000;\n"
"   }\n"
"\n"
"\n"
"   QTabWidget::pane {\n"
"       border: none;\n"
"       background-color: transparent;\n"
"       padding: 15px;\n"
"   }\n"
"\n"
"   QTabBar::tab {\n"
"       background: #333;\n"
"       color: #ccc;\n"
"       padding: 10px 50px;\n"
"       font-size: 10px;\n"
"       border: none;\n"
"       border-radius: 3px;\n"
"       margin-right: 10px;\n"
"   }\n"
"\n"
"   QTabBar::tab:selected {\n"
"       background: #107c10;\n"
"       color: white;\n"
"   }\n"
"\n"
"   QTabBar::tab:hover {\n"
"       background: #0e6a0e;\n"
"   }\n"
"\n"
"\n"
"   QGroupBox {\n"
"       background-color: #1a1a1a;\n"
"       border: none;\n"
"       padding: 25px;\n"
"       font-size: 16px;\n"
"       color: #ccc;\n"
"       margin-top: 20px;\n"
"   }\n"
"\n"
"   QGroupBox::title {\n"
"       subcontrol-origin: margin;\n"
"       subcontrol-position: top left;\n"
"       padding: 0 5px;\n"
"       background-color: transparent;\n"
"       col"
                        "or: #ccc;\n"
"   }\n"
"\n"
"\n"
"   QPushButton {\n"
"       background-color: #107c10;\n"
"       border: none;\n"
"       color: white;\n"
"       padding: 12px 25px;\n"
"       font-size: 14px;\n"
"       min-width: 150px;\n"
"   }\n"
"\n"
"   QPushButton:hover {\n"
"       background-color: #0e6a0e;\n"
"   }\n"
"\n"
"   QPushButton:pressed {\n"
"       background-color: #0a4a0a;\n"
"   }\n"
"\n"
"\n"
"   QLineEdit {\n"
"       background-color: #333;\n"
"       border: none;\n"
"       padding: 12px;\n"
"       font-size: 14px;\n"
"       color: #ccc;\n"
"       min-width: 200px;\n"
"   }\n"
"\n"
"   QLineEdit:focus {\n"
"       border: 2px solid #107c10;\n"
"   }\n"
"\n"
"\n"
"   QTableWidget {\n"
"       background-color: #1a1a1a;\n"
"       border: none;\n"
"       font-size: 14px;\n"
"       color: #ccc;\n"
"       padding: 15px;\n"
"   }\n"
"\n"
"   QTableWidget::item {\n"
"       padding: 10px;\n"
"       color: #ccc;\n"
"   }\n"
"\n"
"   QTableWidget::item:selected {\n"
"       background-color: #10"
                        "7c10;\n"
"       color: white;\n"
"   }\n"
"\n"
"   QHeaderView::section {\n"
"       background-color: #333;\n"
"       color: #ccc;\n"
"       padding: 12px;\n"
"       font-size: 14px;\n"
"       font-weight: bold;\n"
"       border: none;\n"
"   }\n"
"\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 961, 661));
        tabAddTeacher = new QWidget();
        tabAddTeacher->setObjectName(QString::fromUtf8("tabAddTeacher"));
        groupBoxTeacher = new QGroupBox(tabAddTeacher);
        groupBoxTeacher->setObjectName(QString::fromUtf8("groupBoxTeacher"));
        groupBoxTeacher->setGeometry(QRect(20, 20, 921, 221));
        teacherLastNameLineEdit = new QLineEdit(groupBoxTeacher);
        teacherLastNameLineEdit->setObjectName(QString::fromUtf8("teacherLastNameLineEdit"));
        teacherLastNameLineEdit->setGeometry(QRect(20, 30, 281, 41));
        teacherFirstNameLineEdit = new QLineEdit(groupBoxTeacher);
        teacherFirstNameLineEdit->setObjectName(QString::fromUtf8("teacherFirstNameLineEdit"));
        teacherFirstNameLineEdit->setGeometry(QRect(20, 80, 281, 51));
        teacherMiddleNameLineEdit = new QLineEdit(groupBoxTeacher);
        teacherMiddleNameLineEdit->setObjectName(QString::fromUtf8("teacherMiddleNameLineEdit"));
        teacherMiddleNameLineEdit->setGeometry(QRect(20, 140, 281, 51));
        teacherSubjectLineEdit = new QLineEdit(groupBoxTeacher);
        teacherSubjectLineEdit->setObjectName(QString::fromUtf8("teacherSubjectLineEdit"));
        teacherSubjectLineEdit->setGeometry(QRect(320, 40, 281, 41));
        teacherRoomLineEdit = new QLineEdit(groupBoxTeacher);
        teacherRoomLineEdit->setObjectName(QString::fromUtf8("teacherRoomLineEdit"));
        teacherRoomLineEdit->setGeometry(QRect(320, 90, 281, 41));
        addTeacherButton = new QPushButton(groupBoxTeacher);
        addTeacherButton->setObjectName(QString::fromUtf8("addTeacherButton"));
        addTeacherButton->setGeometry(QRect(320, 140, 281, 51));
        tabWidget->addTab(tabAddTeacher, QString());
        tabAddStudent = new QWidget();
        tabAddStudent->setObjectName(QString::fromUtf8("tabAddStudent"));
        groupBoxStudent = new QGroupBox(tabAddStudent);
        groupBoxStudent->setObjectName(QString::fromUtf8("groupBoxStudent"));
        groupBoxStudent->setGeometry(QRect(20, 20, 921, 361));
        studentLastNameLineEdit = new QLineEdit(groupBoxStudent);
        studentLastNameLineEdit->setObjectName(QString::fromUtf8("studentLastNameLineEdit"));
        studentLastNameLineEdit->setGeometry(QRect(20, 40, 281, 41));
        studentFirstNameLineEdit = new QLineEdit(groupBoxStudent);
        studentFirstNameLineEdit->setObjectName(QString::fromUtf8("studentFirstNameLineEdit"));
        studentFirstNameLineEdit->setGeometry(QRect(20, 90, 281, 41));
        studentClassLineEdit = new QLineEdit(groupBoxStudent);
        studentClassLineEdit->setObjectName(QString::fromUtf8("studentClassLineEdit"));
        studentClassLineEdit->setGeometry(QRect(20, 140, 281, 41));
        studentSubject1LineEdit = new QLineEdit(groupBoxStudent);
        studentSubject1LineEdit->setObjectName(QString::fromUtf8("studentSubject1LineEdit"));
        studentSubject1LineEdit->setGeometry(QRect(320, 40, 281, 41));
        studentSubject2LineEdit = new QLineEdit(groupBoxStudent);
        studentSubject2LineEdit->setObjectName(QString::fromUtf8("studentSubject2LineEdit"));
        studentSubject2LineEdit->setGeometry(QRect(320, 90, 281, 41));
        studentSubject3LineEdit = new QLineEdit(groupBoxStudent);
        studentSubject3LineEdit->setObjectName(QString::fromUtf8("studentSubject3LineEdit"));
        studentSubject3LineEdit->setGeometry(QRect(320, 140, 281, 41));
        studentGrade1LineEdit = new QLineEdit(groupBoxStudent);
        studentGrade1LineEdit->setObjectName(QString::fromUtf8("studentGrade1LineEdit"));
        studentGrade1LineEdit->setGeometry(QRect(20, 190, 281, 41));
        studentGrade2LineEdit = new QLineEdit(groupBoxStudent);
        studentGrade2LineEdit->setObjectName(QString::fromUtf8("studentGrade2LineEdit"));
        studentGrade2LineEdit->setGeometry(QRect(20, 240, 281, 41));
        studentGrade3LineEdit = new QLineEdit(groupBoxStudent);
        studentGrade3LineEdit->setObjectName(QString::fromUtf8("studentGrade3LineEdit"));
        studentGrade3LineEdit->setGeometry(QRect(20, 290, 281, 41));
        addStudentButton = new QPushButton(groupBoxStudent);
        addStudentButton->setObjectName(QString::fromUtf8("addStudentButton"));
        addStudentButton->setGeometry(QRect(320, 190, 281, 41));
        tabWidget->addTab(tabAddStudent, QString());
        tabAddRoom = new QWidget();
        tabAddRoom->setObjectName(QString::fromUtf8("tabAddRoom"));
        groupBoxRoom = new QGroupBox(tabAddRoom);
        groupBoxRoom->setObjectName(QString::fromUtf8("groupBoxRoom"));
        groupBoxRoom->setGeometry(QRect(20, 20, 921, 161));
        roomNumberLineEdit = new QLineEdit(groupBoxRoom);
        roomNumberLineEdit->setObjectName(QString::fromUtf8("roomNumberLineEdit"));
        roomNumberLineEdit->setGeometry(QRect(20, 40, 281, 41));
        roomFloorLineEdit = new QLineEdit(groupBoxRoom);
        roomFloorLineEdit->setObjectName(QString::fromUtf8("roomFloorLineEdit"));
        roomFloorLineEdit->setGeometry(QRect(20, 90, 281, 41));
        roomThemeLineEdit = new QLineEdit(groupBoxRoom);
        roomThemeLineEdit->setObjectName(QString::fromUtf8("roomThemeLineEdit"));
        roomThemeLineEdit->setGeometry(QRect(320, 40, 281, 41));
        addRoomButton = new QPushButton(groupBoxRoom);
        addRoomButton->setObjectName(QString::fromUtf8("addRoomButton"));
        addRoomButton->setGeometry(QRect(320, 90, 281, 51));
        tabWidget->addTab(tabAddRoom, QString());
        tabQueries = new QWidget();
        tabQueries->setObjectName(QString::fromUtf8("tabQueries"));
        groupBoxQueries = new QGroupBox(tabQueries);
        groupBoxQueries->setObjectName(QString::fromUtf8("groupBoxQueries"));
        groupBoxQueries->setGeometry(QRect(20, 20, 921, 221));
        queryStudentLineEdit = new QLineEdit(groupBoxQueries);
        queryStudentLineEdit->setObjectName(QString::fromUtf8("queryStudentLineEdit"));
        queryStudentLineEdit->setGeometry(QRect(20, 40, 281, 41));
        queryStudentButton = new QPushButton(groupBoxQueries);
        queryStudentButton->setObjectName(QString::fromUtf8("queryStudentButton"));
        queryStudentButton->setGeometry(QRect(320, 40, 281, 41));
        queryTeacherLineEdit = new QLineEdit(groupBoxQueries);
        queryTeacherLineEdit->setObjectName(QString::fromUtf8("queryTeacherLineEdit"));
        queryTeacherLineEdit->setGeometry(QRect(20, 90, 281, 41));
        queryTeacherButton = new QPushButton(groupBoxQueries);
        queryTeacherButton->setObjectName(QString::fromUtf8("queryTeacherButton"));
        queryTeacherButton->setGeometry(QRect(320, 90, 281, 41));
        queryRoomThemeLineEdit = new QLineEdit(groupBoxQueries);
        queryRoomThemeLineEdit->setObjectName(QString::fromUtf8("queryRoomThemeLineEdit"));
        queryRoomThemeLineEdit->setGeometry(QRect(20, 140, 281, 41));
        queryRoomButton = new QPushButton(groupBoxQueries);
        queryRoomButton->setObjectName(QString::fromUtf8("queryRoomButton"));
        queryRoomButton->setGeometry(QRect(320, 140, 281, 41));
        tabWidget->addTab(tabQueries, QString());
        tabTable = new QWidget();
        tabTable->setObjectName(QString::fromUtf8("tabTable"));
        tableWidget = new QTableWidget(tabTable);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 911, 471));
        refreshTableButton = new QPushButton(tabTable);
        refreshTableButton->setObjectName(QString::fromUtf8("refreshTableButton"));
        refreshTableButton->setGeometry(QRect(230, 500, 200, 51));
        saveToFileButton = new QPushButton(tabTable);
        saveToFileButton->setObjectName(QString::fromUtf8("saveToFileButton"));
        saveToFileButton->setGeometry(QRect(10, 500, 200, 51));
        tabWidget->addTab(tabTable, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\250\320\272\320\276\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        groupBoxTeacher->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        teacherLastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        teacherFirstNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        teacherMiddleNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        teacherSubjectLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        teacherRoomLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\260", nullptr));
        addTeacherButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddTeacher), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        groupBoxStudent->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        studentLastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        studentFirstNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        studentClassLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\232\320\273\320\260\321\201\321\201", nullptr));
        studentSubject1LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 1", nullptr));
        studentSubject2LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 2", nullptr));
        studentSubject3LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202 3", nullptr));
        studentGrade1LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260 \320\277\320\276 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\203 1", nullptr));
        studentGrade2LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260 \320\277\320\276 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\203 2", nullptr));
        studentGrade3LineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260 \320\277\320\276 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\203 3", nullptr));
        addStudentButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddStudent), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        groupBoxRoom->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\260", nullptr));
        roomNumberLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\260", nullptr));
        roomFloorLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\255\321\202\320\260\320\266", nullptr));
        roomThemeLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\260\321\202\320\270\320\272\320\260", nullptr));
        addRoomButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAddRoom), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        groupBoxQueries->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        queryStudentLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        queryStudentButton->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\277\320\265\320\262\320\260\320\265\320\274\320\276\321\201\321\202\321\214", nullptr));
        queryTeacherLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        queryTeacherButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\261\320\270\320\275\320\265\321\202\321\213 \321\203\321\207\320\270\321\202\320\265\320\273\321\217", nullptr));
        queryRoomThemeLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\260\321\202\320\270\320\272\320\260 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\260", nullptr));
        queryRoomButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQueries), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        refreshTableButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        saveToFileButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTable), QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
