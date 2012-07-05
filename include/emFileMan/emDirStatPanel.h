//------------------------------------------------------------------------------
// emDirStatPanel.h
//
// Copyright (C) 2007-2008,2010 Oliver Hamann.
//
// Homepage: http://eaglemode.sourceforge.net/
//
// This program is free software: you can redistribute it and/or modify it under
// the terms of the GNU General Public License version 3 as published by the
// Free Software Foundation.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU General Public License version 3 for
// more details.
//
// You should have received a copy of the GNU General Public License version 3
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#ifndef emDirStatPanel_h
#define emDirStatPanel_h

#ifndef emDirModel_h
#include <emFileMan/emDirModel.h>
#endif

#ifndef emFilePanel_h
#include <emCore/emFilePanel.h>
#endif

#ifndef emFileManViewConfig_h
#include <emFileMan/emFileManViewConfig.h>
#endif


class emDirStatPanel : public emFilePanel {

public:

	emDirStatPanel(ParentArg parent, const emString & name,
	               emDirModel * fileModel=NULL, bool updateFileModel=true);

	virtual void SetFileModel(emFileModel * fileModel,
	                          bool updateFileModel=true);

protected:

	virtual bool Cycle();

	virtual bool IsOpaque();

	virtual void Paint(const emPainter & painter, emColor canvasColor);

private:

	void UpdateStatistics();

	emRef<emFileManViewConfig> Config;
	int TotalCount,FileCount,SubDirCount,OtherTypeCount,HiddenCount;
};


#endif