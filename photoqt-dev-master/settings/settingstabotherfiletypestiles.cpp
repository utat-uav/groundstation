/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "settingstabotherfiletypestiles.h"

SettingsTabOtherFileTypesTiles::SettingsTabOtherFileTypesTiles(QString ftype, QWidget *parent) : QWidget(parent) {

	this->setObjectName("tile");

	// The standard default stylesheet
	css = "#tile { font-weight: bold; color: black; border-radius: 5px; padding: 1px; font-size: 8pt;";
	cssOff = "#tile { font-weight: bold; color: rgb(30,30,30); border-radius: 5px; padding: 1px; font-size: 8pt;";

	// Some special stylesheet for hovered and normal
	cssBackgroundNorm = "background: rgba(255,255,255,150); }";
	cssBackgroundHov = "background: rgba(255,255,255,200); }";

	cssBackgroundOffNorm = "background: rgba(255,255,255,100); }";
	cssBackgroundOffHov = "background: rgba(255,255,255,150); }";

	cssToolTip = "QToolTip {font-weight: bold; color: black; border-radius: 5px; padding: 1px; font-size: 8pt; background: rgba(255,255,255,200); }";

	// Main Layout
	QVBoxLayout *lay = new QVBoxLayout;

	this->setMouseTracking(true);
	this->setCursor(Qt::PointingHandCursor);

	// Store the exif key value
	filetype = ftype;

	// The back label is being styled
	back = new CustomLabel("<center>*" + ftype + "</center>");
	back->setFontColor("black");
	back->setBold(true);

	// The checkbox for diabling or enabling this tile
	enabled = new CustomCheckBox;
	enabled->setIndicatorSize(16);
	QHBoxLayout *enabledLay = new QHBoxLayout;
	enabledLay->addStretch();
	enabledLay->addWidget(enabled);
	enabledLay->addStretch();
	connect(enabled, SIGNAL(clicked()), this, SLOT(checkboxClicked()));

	this->setFixedSize(80,60);

	lay->addWidget(back);
	lay->addSpacing(10);
	lay->addLayout(enabledLay);
	this->setLayout(lay);

	// Default css
	this->setStyleSheet(cssOff + cssBackgroundOffNorm + cssToolTip);

}

// Set this tile checked
void SettingsTabOtherFileTypesTiles::setChecked(bool chkd) {

	if(chkd) {
		this->setStyleSheet(css + cssBackgroundNorm + cssToolTip);
	} else {
		this->setStyleSheet(cssOff + cssBackgroundOffNorm + cssToolTip);
	}

	enabled->setChecked(chkd);

}

void SettingsTabOtherFileTypesTiles::setEnabled(bool en) {

	if(!en) {
		enabled->setEnabled(false);

		cssBackgroundNorm = "background: rgba(255,255,255,100);";
		cssBackgroundHov = "background: rgba(255,255,255,100);";

		cssBackgroundOffNorm = "background: rgba(255,255,255,100);";
		cssBackgroundOffHov = "background: rgba(255,255,255,100);";

		this->setCursor(Qt::ArrowCursor);
	} else {

		enabled->setEnabled(true);

		cssBackgroundNorm = "background: rgba(255,255,255,150);";
		cssBackgroundHov = "background: rgba(255,255,255,200);";

		cssBackgroundOffNorm = "background: rgba(255,255,255,100);";
		cssBackgroundOffHov = "background: rgba(255,255,255,150);";

		this->setCursor(Qt::PointingHandCursor);

	}

}

// Click on the checkbox
void SettingsTabOtherFileTypesTiles::checkboxClicked() {

	if(!enabled->isChecked())
		this->setStyleSheet(css + cssBackgroundNorm + cssToolTip);
	else
		setChecked(true);

}

void SettingsTabOtherFileTypesTiles::mouseMoveEvent(QMouseEvent *) {

	if(enabled->isChecked())
		this->setStyleSheet(css + cssBackgroundHov + cssToolTip);
	else
		this->setStyleSheet(cssOff + cssBackgroundOffHov + cssToolTip);

}

void SettingsTabOtherFileTypesTiles::enterEvent(QEvent *) {

	if(enabled->isChecked())
		this->setStyleSheet(css + cssBackgroundHov + cssToolTip);
	else
		this->setStyleSheet(cssOff + cssBackgroundOffHov + cssToolTip);

}

void SettingsTabOtherFileTypesTiles::leaveEvent(QEvent *) {

	if(enabled->isChecked())
		this->setStyleSheet(css + cssBackgroundNorm + cssToolTip);
	else
		this->setStyleSheet(cssOff + cssBackgroundOffNorm + cssToolTip);

}

void SettingsTabOtherFileTypesTiles::mousePressEvent(QMouseEvent *) {

	if(!enabled->isEnabled()) return;

	enabled->setChecked(!enabled->isChecked());
	if(enabled->isChecked())
		this->setStyleSheet(css + cssBackgroundHov + cssToolTip);
	else
		this->setStyleSheet(css + cssBackgroundNorm + cssToolTip);

}


void SettingsTabOtherFileTypesTiles::paintEvent(QPaintEvent *) {
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}

SettingsTabOtherFileTypesTiles::~SettingsTabOtherFileTypesTiles() { }
