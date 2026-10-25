<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Register</title>
    <style>
        form {
            background-color: mediumpurple;
            border: black 1px solid;
            padding: 20px 20px 20px 200px;
        }
        legend {
            font-weight: bold;
        }
    </style>
</head>
<body>
    <h1>Register</h1>

    <?php
    $errors = array();
    
    if (isset($_POST['surname']))
    {
        require 'validate.inc';
        
        validateName($errors, $_POST, 'surname');
        validateEmail($errors, $_POST, 'email');
        validatePassword($errors, $_POST, 'passwd');
        validateAddress($errors, $_POST, 'address');
        validateState($errors, $_POST, 'state');
        validateGender($errors, $_POST, 'sex');

        if ($errors)
        {
            echo '<h3>Invalid, correct the following errors:</h3>';
            foreach ($errors as $field => $error)
                echo "$field $error<br/>";

            include 'form.inc';
        }
        else
        {
            // Tidak ada error
            echo 'Form submitted successfully with no errors';
        }
    }
    else
    {
        include 'form.inc';
    }
    ?>
</body>
</html>
