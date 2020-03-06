BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "objects" (
	"id"	INTEGER,
	"температура"	INTEGER,
	"наличие_кашля"	INTEGER,
	"time"	INTEGER
);
CREATE TABLE IF NOT EXISTS "classes" (
	"id"	INTEGER,
	"class"	TEXT
);
INSERT INTO "objects" (id,температура,наличие_кашля,time) VALUES (0,355,0,0),
 (1,362,0,1),
 (2,365,1,0),
 (3,361,0,1),
 (4,363,0,0),
 (5,371,0,1),
 (6,373,0,0),
 (7,371,1,1),
 (8,378,1,0),
 (9,382,1,1),
 (10,380,0,0),
 (11,381,1,1);
INSERT INTO "classes" (id,class) VALUES (0,'Здоров'),
 (1,'Здоров'),
 (2,'Здоров'),
 (3,'Болен'),
 (4,'Болен'),
 (5,'Болен');
COMMIT;
