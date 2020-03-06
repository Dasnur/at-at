BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS `objects` (
	`id`	INTEGER,
	`time`	INTEGER,
	`x1`	INTEGER,
	`x2`	INTEGER
);
INSERT INTO `objects` VALUES (0,0,358,0);
INSERT INTO `objects` VALUES (0,1,363,1);
INSERT INTO `objects` VALUES (1,0,365,0);
INSERT INTO `objects` VALUES (1,1,361,1);
INSERT INTO `objects` VALUES (2,0,357,363);
INSERT INTO `objects` VALUES (2,1,1,1);
CREATE TABLE IF NOT EXISTS `classes` (
	`id`	INTEGER,
	`class`	TEXT
);
INSERT INTO `classes` VALUES (0,'Здоров');
INSERT INTO `classes` VALUES (1,'Здоров');
INSERT INTO `classes` VALUES (2,'Здоров');
COMMIT;
