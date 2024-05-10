pipeline {
    agent any 
    stages {
        stage('Hello') {
            steps {
                cd /home/ubuntu/workspace/multi-branch_1_dev123
                make ABC.exe
                echo "success"
            }
        }
    }
}