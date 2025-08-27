<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <?php

    ?>
</head>

<body>
    <div style="width: 50vw;border: 1px solid black;padding:4rem;margin:auto;margin-top:20vh;">
        <form method="GET">
            <label for="input1">Name : &nbsp;&nbsp;</label>
            <input type="text" name="input1" value="<?php echo $input1 ?>">
            <br>
            <br>
            <label for="input2">ID : &nbsp;&nbsp;</label>
            <input type="text" name="input2" value="<?php echo $input2 ?>">
            <br>
            <br>
            <label for="input3">Phone Number : &nbsp;&nbsp;</label>
            <input type="text" name="input3" value="<?php echo $input3 ?>">
            <br>
            <br>
            <label for="input4">Gender : &nbsp;&nbsp;</label>
            <input type="text" name="input4" value="<?php echo $input4 ?>">
            <br>
            <br>
            <label for="input5">Blood Group : &nbsp;&nbsp;</label>
            <input type="text" name="input5" value="<?php echo $input5 ?>">
            <br>
            <br>
            <!-- <p>Output :</p> -->
            <div style="border: 1px solid black;width:180px;height: 150px;text-align:left;padding:1rem;">

                <?php
                $name = $_GET['input1'];
                $id = $_GET['input2'];
                $phone = $_GET['input3'];
                $gender = $_GET['input4'];
                $blood = $_GET['input5'];
                echo
                "
                <br>
                Name: $name
                <br>
                ID: $id
                <br>
                Phone Number: $phone
                <br>
                Gender: $gender
                <br>
                Blood Group: $blood
                <br>
                
                ";

                ?>
            </div>

            <br>
            <br>

            <input type="submit">
        </form>


    </div>

</body>

</html>