/***************************************************************************
 *   Copyright (C) 2005 by frog                                            *
 *   root@sdu-zl9999                                                       *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "qpainter.h"
#include "qevent.h"

#include "qscrollview.h"

#include "board.h"
#include "defs.h"
#include "graphic.h"


class CCnchessView : public QScrollView
{
Q_OBJECT
public:
	CCnchessView(QWidget * parent,const char *name,WFlags f);
	~CCnchessView();
	void RequireDrawCell(short pos);
	void OnLetComputerThink();

public:

	
	
public slots:
	

protected:
	void drawContents(QPainter *p,int cx,int cy,int cw,int ch);
	void contentsMousePressEvent (QMouseEvent * e);
	
protected:

private:
	
private:
	


signals:
	void mysignal0();

};

extern CCnchessView *m_cnchessview;
