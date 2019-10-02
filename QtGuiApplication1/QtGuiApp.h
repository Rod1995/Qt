#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApp.h"

class QtGuiApp : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiAppClass ui;
};
