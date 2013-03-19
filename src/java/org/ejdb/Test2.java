package org.ejdb;

import org.bson.BSONObject;
import org.bson.BasicBSONObject;
import org.ejdb.driver.EJDB;
import org.ejdb.driver.EJDBCollection;
import org.ejdb.driver.EJDBQuery;
import org.ejdb.driver.EJDBResultSet;

import java.util.Random;

/**
 * @author Tyutyunkov Vyacheslav (tve@softmotions.com)
 * @version $Id$
 */
public class Test2 {
    public static int INDEX = -1;

    public static final int TEST_COUNT = 15;
    public static final Random random = new Random(System.currentTimeMillis());

    public static void main(String[] args) {
        EJDB db = new EJDB();

        try {
            db.open("test5");
            System.out.println("test EJDB opened");

            EJDBCollection test = db.getCollection("test");

            test.drop(true);
            System.out.println("test collection dropped");
            test.ensureExists();
            System.out.println("test collection created");

            for (int i = 0; i < TEST_COUNT; ++i) {
                test.save(getTestObject());
            }

            System.out.println("test objects saved");

            test.sync();
            System.out.println("test collection synced");

            EJDBQuery query = test.createQuery(new BasicBSONObject());

            System.out.println("Objects matched: " + query.count());

            EJDBResultSet rs = query.find();
            for (BSONObject r : rs) {
                System.out.println(r);
            }

            System.out.println(query.findOne());

        } finally {
            db.close();
        }
    }

    private static BSONObject getTestObject() {
        BSONObject bsonObject = new BasicBSONObject();

        ++INDEX;

        bsonObject.put("name", "Object#" + INDEX);
        bsonObject.put("time", System.currentTimeMillis());
        bsonObject.put("index", INDEX);
        bsonObject.put("random", random.nextLong());

        return bsonObject;
    }
}
