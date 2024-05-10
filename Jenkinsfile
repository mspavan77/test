pipeline {
    agent { label 'pavan_label'}
    stages {
        stage('Hello') {
            steps {
                cd /home/ubuntu/workspace/multi-branch_1_dev123
                make ABC.exe
            }
        }
    }
}