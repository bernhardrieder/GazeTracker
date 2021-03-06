﻿#pragma once
#include "ui_cornerconfigurationui.h"

namespace gt
{
	class CornerConfigurationUI : public QWidget
	{
		Q_OBJECT

	public:
		CornerConfigurationUI(QWidget* parent = Q_NULLPTR);
		~CornerConfigurationUI();

	signals:
		void configurationSuccess();
	public slots:
		void show();
		void close();
	private slots:
		void saveTopLeft(bool);
		void saveTopMiddle(bool);
		void saveTopRight(bool);
		void saveMiddleLeft(bool);
		void saveMiddleMiddle(bool);
		void saveMiddleRight(bool);
		void saveBottomLeft(bool);
		void saveBottomMiddle(bool);
		void saveBottomRight(bool);
	private:
		Ui::CornerConfigurationUI ui;
		unsigned int m_setCorners;
		std::vector<QPushButton*> m_CornerButtons;

		void saveCurrentCornerAs(QPushButton* btn, bool var, Configuration::Corners corner);
		bool allCornersSet() const;
		void resetCorners() const;
		void resetCornerButtons() const;
	};
}

