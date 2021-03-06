
#include "test_atcflighttag.h"


void Test_ATCFlightTag::test_setTagType()
{
    ATCFlightTag foo;

    foo.setTagType(ATC::Full);
    QVERIFY(foo.getTagType() == ATC::Full);

    foo.setTagType(ATC::Short);
    QVERIFY(foo.getTagType() == ATC::Short);
}

void Test_ATCFlightTag::test_setDiamond()
{
    ATCFlightTag foo;
    QVERIFY(foo.getDiamond() == nullptr);

    ATCPaths paths;
    ATCSettings settings(&paths);
    double scale = 1;

    ATCTagDiamond *rect = new ATCTagDiamond(1, 2, 3, 4, &settings, &scale);
    foo.setDiamond(rect);
    QVERIFY(foo.getDiamond() == rect);
}

void Test_ATCFlightTag::test_setDiamondPosition()
{
    ATCFlightTag foo;

    QPointF point(20, 30);
    foo.setDiamondPosition(point);
    QVERIFY(foo.getDiamondPosition() == point);
}

void Test_ATCFlightTag::test_setLeader()
{
    ATCFlightTag foo;
    QVERIFY(foo.getLeader() == nullptr);

    QGraphicsLineItem *line = new QGraphicsLineItem();
    foo.setLeader(line);
    QVERIFY(foo.getLeader() == line);
}

void Test_ATCFlightTag::test_setLeaderEndPosition()
{
    ATCFlightTag foo;

    QPointF point(20, 30);
    foo.setLeaderEndPosition(point);
    QVERIFY(foo.getLeaderEndPosition() == point);
}

void Test_ATCFlightTag::test_getTagBox()
{
    ATCFlightTag foo;
    QVERIFY(foo.getTagBox() == nullptr);

    ATCPaths paths;
    ATCSettings settings(&paths);
    double scale = 4;

    ATC::TagType type = ATC::Full;
    ATCTagRect *rect = new ATCTagRect(2, 2, 4, 3, &settings, &scale, &type);
    foo.setTagBox(rect);
    QVERIFY(foo.getTagBox() == rect);
}

void Test_ATCFlightTag::test_getConnector()
{
    ATCFlightTag foo;
    QVERIFY(foo.getLeader() == nullptr);

    QGraphicsLineItem *line = new QGraphicsLineItem();
    foo.setConnector(line);
    QVERIFY(foo.getConnector() == line);
}

void Test_ATCFlightTag::test_getText()
{
    ATCFlightTag foo;
    QVERIFY(foo.getText() == nullptr);

    QGraphicsSimpleTextItem *text = new QGraphicsSimpleTextItem();
    foo.setText(text);
    QVERIFY(foo.getText() == text);
}
